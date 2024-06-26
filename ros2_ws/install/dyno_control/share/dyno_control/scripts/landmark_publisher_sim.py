#!/usr/bin/env python3

import sys

from rclpy.node import Node
import rclpy
import math
import numpy as np
from gazebo_msgs.srv import GetModelState
from my_interfaces.msg import LandmarkMsg, LandmarksMsg
from visualization_msgs.msg import Marker, MarkerArray


class PublishLandmarks(Node):
    """
    Publishes the observable cylinders as a landmark measurement, simulating the perception system on a real robot.
    """

    def __init__(self):
        super().__init__('landmark_publisher')
        self.pub_landmarks = self.create_publisher(LandmarksMsg, 'landmarks', 5)
        self.pub_landmark_markers = self.create_publisher(MarkerArray, 'landmark_markers_gt', 5)

        self.get_logger().info("Publish Landmarks Started!")

        self.gazebo_srv = None

    def set_gazebo_service(self, gazebo_srv):
        self.gazebo_srv = gazebo_srv

    def create_landmark_marker(self, x, y):
        marker = Marker()
        marker.header.frame_id = 'base_link'
        marker.id = id
        marker.type = 3
        marker.action = 0
        marker.pose.position.x = x
        marker.pose.position.y = y
        marker.pose.orientation.w = 1.
        marker.pose.orientation.x = 0.
        marker.pose.orientation.y = 0.
        marker.pose.orientation.z = 0.

        # Black Coloe
        marker.color.r = 0.0
        marker.color.g = 0.0
        marker.color.b = 0.0
        
        marker.color.a = 0.7
        marker.scale.x = 0.1
        marker.scale.y = 0.1
        marker.scale.z = 0.1
        
        marker.frame_locked = False             # keep this False
        marker.lifetime = self.Duration(0.1)  # lifetime of a marker
        return marker
 

    def publish_landmarks_using_service(self):
        """Publish landmarks by using the gazebo/get_model_state service.

        The function reads positions of the landmarks relative to the robot and
        checks if they are within the field of view of the robot. All such landmarks
        are published as a Landmarks_Msg

        """

        msg_landmarks = LandmarksMsg()
        marker_array_msg = MarkerArray()

        # In the gazebo/model_states, the cylinders are labelled as obstacle_1 to 5
        for i in range(1, 6):
            landmark_position_rel_gt = self.gazebo_srv('obstacle_' + str(i), 'my_turtlebot').pose.position
            # check for infront and within field of view
            #if landmark_position_rel_gt.x>0:
            if True:
                tan_val = abs(landmark_position_rel_gt.y/landmark_position_rel_gt.x)
                angle = math.atan(min(tan_val, 4))  # restrict to 75 deg

                # if angle < 1.047:
                #if angle < 0.47878508936:   # this is the half fov of the sensor
                if True:

                    # add noise to the ground truth position of the landmark
                    landmark_position_rel_x = landmark_position_rel_gt.x + 0.1 * np.random.standard_normal()
                    landmark_position_rel_y = landmark_position_rel_gt.y + 0.1 * np.random.standard_normal()

                    # populate the position and covariance of the landmarks
                    msg_landmark = LandmarkMsg()
                    msg_landmark.id = i
                    msg_landmark.x = landmark_position_rel_x    # x
                    msg_landmark.y = landmark_position_rel_y    # y
                    
                    # add to the landmarks message
                    msg_landmarks.landmarks.append(msg_landmark)
                    
                    marker = self.create_landmark_marker(landmark_position_rel_gt.x, landmark_position_rel_gt.y)
                    
                    self.get_logger().info("-----------------------")
                    self.get_logger().info(str(i) + ": (" + str(landmark_position_rel_x) + ", " + str(landmark_position_rel_y) + ")")
                    self.get_logger().info("-----------------------")
                    marker_array_msg.markers.append(marker)

        if len(msg_landmarks.landmarks) > 0: 
            self.pub_landmarks.publish(msg_landmarks)
            self.pub_landmark_markers.publish(marker_array_msg)


if __name__ == '__main__':
    rclpy.init()
    node = rclpy.create_node('landmark_publisher_sim')
    publm = PublishLandmarks()

    client = node.create_client(GetModelState, '/gazebo/get_model_state')
    while not client.wait_for_service(timeout_sec=1.0):
        node.get_logger().info('Service not available, waiting...')
    publm.set_gazebo_service(client)
    
    while rclpy.ok():
        try:
            publm.publish_landmarks_using_service()
            rclpy.sleep(0.1)    # controls the publishing speed
        except rclpy.ServiceException as e:
            print(f"Service call failed: {e}")
            
    node.destroy_node()
    rclpy.shutdown()