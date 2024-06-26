#!/usr/bin/env python3

import rclpy

from rclpy.node import Node
from geometry_msgs.msg import TransformStamped
from tf2_ros.transform_listener import TransformListener
from tf2_ros import TransformException
from tf2_ros.buffer import Buffer
from my_interfaces.msg import LdrLandmarkMsg2D, LdrLandmarksMsg2D, LdrLandmarkMsg3D, LdrLandmarksMsg3D
import yaml
import numpy as np
import copy

from geometry_msgs.msg import Pose # Change for custom message

import tf2_ros

### Simulates Lidar 3D on landmarks, getting range (double) and unit vector + noise ###
# Publishes ground truth data of landmarks in 2D (ID, x,y) robot's frame #
# Publishes ground truth data of landmarks in 3D (ID, x,y,z) robot's frame #
# Publishes sensor data of landmarks in 2D (ID, range, bearing) robot's frame #
# Publishes sensor data of landmarks in 3D (ID, range, bearing_horizontal, bearing_vertical) robot's frame #

class SensorSimulator(Node):

    def __init__(self):
        super().__init__('sensor_simulator')

        self.tf_buffer = Buffer()
        self.tf_listener = TransformListener(self.tf_buffer, self)
        
        # Create a landmark publisher for ground truth data
        # 2D
        self.gt_landmarks_publisher2D = self.create_publisher(LdrLandmarksMsg2D, 'measurement_lidar_2d_landmark_gt', 10)
        # # 3D
        # self.gt_landmarks_publisher3D = self.create_publisher(LdrLandmarksMsg3D, 'measurement_lidar_3d_landmark_gt', 10)

        # Call on_timer function every second
        self.publisher_timer = self.create_timer(5.0, self.publisherTimer_callback)
        
        # Create a landmark publisher for sensor data in range
        # 2D
        self.lidar_landmarks_publisher2D = self.create_publisher(LdrLandmarksMsg2D, 'measurement_lidar_2d_landmark', 10)
        # # 3D
        # self.lidar_landmarks_publisher3D = self.create_publisher(LdrLandmarksMsg3D, 'measurement_lidar_3d_landmark', 10)
        
    def publisherTimer_callback(self):
        obstacle_frames = self.get_tf2_frames()
        # publish 2d ground truth LiDAR landmark measurement to "measurement_lidar_2d_landmark_gt"
        self.publish_2d_gt_msgs(obstacle_frames)
        # publish 2d LiDAR landmark measurement to "measurement_lidar_2d_landmark"
        self.publish_2d_lidar_msgs(obstacle_frames)

    # Get obstacle frames names and publish 2D ground truth simulated lidar messages
    def publish_2d_gt_msgs(self, obstacle_frames):
        if len(obstacle_frames) > 0:
            msg_gt_2d_landmarks = LdrLandmarksMsg2D()
            # Loop through the obstacle frames
            for obstacle in obstacle_frames:
                # Get relative pose and id of the obstacle
                transform, id = self.extract_relatve_pos_tf(obstacle)
                # Create a msg and add it to the message list
                if (transform and id) is not None:
                    msg_gt_2d_landmarks.landmarks2d.append(self.create_2d_gt_msg(transform, id))
            # Publish msg
            if len(msg_gt_2d_landmarks.landmarks2d) > 0:
                # filter messages to only publish the ones that are in range and bearing limits
                msg_gt_2d_landmarks = self.filter_messages_lidar_2d(msg_gt_2d_landmarks, 1.0, 6.0, 2.0)
                # Publish
                self.gt_landmarks_publisher2D.publish(msg_gt_2d_landmarks)
            
            
    # Get obstacle frames names and publish 2D simulated lidar messages (gt with noise)   
    def publish_2d_lidar_msgs(self, obstacle_frames):
        if len(obstacle_frames) > 0:
            msg_lidar_landmarks = LdrLandmarksMsg2D()
            # Loop through the obstacle frames
            for obstacle in obstacle_frames:
                # Get relative pose and id of the obstacle
                transform, id = self.extract_relatve_pos_tf(obstacle)
                # Create a msg, add noise and add it to the message list
                if (transform and id) is not None:
                    gt_msg = self.create_2d_gt_msg(transform, id)
                    gt_msg.range += np.random.normal(0, 0.05)
                    gt_msg.bearing += np.random.normal(0, 0.02)
                    msg_lidar_landmarks.landmarks2d.append(gt_msg)
            # Publish msg
            if len(msg_lidar_landmarks.landmarks2d) > 0:
                # filter messages to only publish the ones that are in range and bearing limits
                msg_lidar_landmarks = self.filter_messages_lidar_2d(msg_lidar_landmarks, 1.0, 6.0, 2.0)
                # Publish
                self.lidar_landmarks_publisher2D.publish(msg_lidar_landmarks)
        
        
    
    # Get all the frames and return the list of names of the obstacle frames
    def get_tf2_frames(self):
        # Get List of the existing frames' names
        frames_dict = yaml.safe_load(self.tf_buffer.all_frames_as_yaml())
        frames_list = list(frames_dict.keys())
        # Filter Through the list to only get names of the obstacles
        frames_names_filtered = [name for name in frames_list if name in frames_list and 'obstacle_' in name]

        return frames_names_filtered
    
    
    # Return obstacle id and the relative pose transform between 2 frames
    def extract_relatve_pos_tf(self, frame_name):
        from_frame = frame_name
        to_frame = 'base_link'
        
        # Get id of the obstacle from the frame's name
        id_int = int(''.join([x for x in frame_name if x.isdigit()]))
        
        try:
            t = self.tf_buffer.lookup_transform(
                        from_frame, # Target Frame
                        to_frame, # Source frame
                        rclpy.time.Time())
        except TransformException as ex:
                    self.get_logger().info(f'Could not transform {from_frame} to {to_frame}: {ex}')
                    return None
        return (t.transform, id_int)

    # Given frames name create a 2d lidar message of lidar measurement from the robot to the given obstacle of the frames name
    def create_2d_gt_msg(self, transform, id):
        
        # Calculate the range
        x = transform.translation.x
        y = transform.translation.y
        range = np.linalg.norm([x, y])
        
        # Calculate the bearing - get the yaw angle from the quaternion
        q_x = transform.rotation.x
        q_y = transform.rotation.y
        q_z = transform.rotation.z
        q_w = transform.rotation.w
        bearing = np.arctan2(2 * (q_w * q_z + q_x * q_y), 1 - 2 * (np.square(q_y) + np.square(q_z)))
        
        # Create a 2d message with no noise and return it
        msg = LdrLandmarkMsg2D()
        msg.label = id
        msg.range = range
        msg.bearing = bearing
        return msg
    
    ### Take a message with a list of messages, return a a message with a list of filtered messages
    # Check if the message is in the lidar's range and bearing limits.
    def filter_messages_lidar_2d(self, msgs_list, range_low, range_high, bearing_limit):
        # Deep copy to get the correct object type and return it filtered
        filtered_list = copy.deepcopy(msgs_list)
        # Loop through the messages and remove the ones out of limits from the filtered list
        for msg in msgs_list.landmarks2d:
            if (msg.range < range_low) or (msg.range > range_high) or (abs(msg.bearing) > abs(bearing_limit)):
                filtered_list.landmarks2d.remove(msg)
        return filtered_list
    
        
    def create_3d_gt_msg(self, transform):
        pass
        

            
            
def main(args=None):
    rclpy.init(args=args)
    sensor_node = SensorSimulator()
    rclpy.spin(sensor_node)
    # sensor_node.get_tf2_frames()
    sensor_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()