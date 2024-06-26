#!/usr/bin/env python3

import rclpy
import time

from rclpy.node import Node
from gazebo_msgs.srv import GetEntityState, SetModelState, GetModelList
from gazebo_msgs.msg import ModelState
from geometry_msgs.msg import Pose, Twist, TransformStamped

from functools import partial
import tf2_ros

CONST_ROBOTS_NAME = 'my_turtlebot'

class LandmarkTfBroadcaster(Node):

    def __init__(self):
        super().__init__('landmark_tf2_broadcaster')

        self.get_model_list_client = self.create_client(GetModelList, '/get_model_list')
        while not self.get_model_list_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('/get_model_list service not available, waiting again...')

        # Create a client for the '/get_entity_state' service
        self.get_model_state_client = self.create_client(GetEntityState, '/gazebo/get_entity_state')
        while not self.get_model_state_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('/get_entity_state service not available, waiting again...')
        
        self.tf_broadcaster = tf2_ros.TransformBroadcaster(self)
        
    
    def publish_transform(self, result_data, id):
        obstacle_pose = result_data.state.pose
        transform_stamped = TransformStamped()
        transform_stamped.header.stamp = self.get_clock().now().to_msg()
        transform_stamped.header.frame_id = 'odom'  # Parent frame
        transform_stamped.child_frame_id = 'obstacle_' + str(id)  # Child frame
        transform_stamped.transform.translation.x = obstacle_pose.position.x   # Example translation x
        transform_stamped.transform.translation.y = obstacle_pose.position.y   # Example translation y
        transform_stamped.transform.translation.z = obstacle_pose.position.z   # Example translation z
        transform_stamped.transform.rotation.x = obstacle_pose.orientation.x   # Example rotation x
        transform_stamped.transform.rotation.y = obstacle_pose.orientation.y   # Example rotation y
        transform_stamped.transform.rotation.z = obstacle_pose.orientation.z   # Example rotation z
        transform_stamped.transform.rotation.w = obstacle_pose.orientation.w   # Example rotation w

        # Publish the transform
        self.tf_broadcaster.sendTransform(transform_stamped)
        
        
    def call_get_model_list(self):
        request = GetModelList.Request()

        future = self.get_model_list_client.call_async(request)
        rclpy.spin_until_future_complete(self, future)
        
        if future.result() is None:
            self.get_logger().error('Exception while calling get_model_state service: %r' % future.exception())

        model_names = future.result().model_names
        
        # Filter through model names
        model_names_filtered = [name for name in model_names if name in model_names and 'unit_box' in name]
        
        if model_names_filtered is not None:
            self.get_logger().info(f"Model state: {model_names_filtered}")

        # list of model names in gazebo
        return model_names_filtered
    
    

    def call_get_model_state(self, model_name, id):
        request = GetEntityState.Request(name=model_name, reference_frame='world') # Get it in the Robot's frame (CONST_ROBOTS_NAME or 'world' frame)
        # request.model_name = model_name
        ## self.get_logger().info(f"Requesting model {model_name}")

        future = self.get_model_state_client.call_async(request)
        rclpy.spin_until_future_complete(self, future)           # Problem here - Never completes

        if future.result() is not None:
            #self.get_logger().info(f"Model state: {future.result()}")
            self.publish_transform(future.result(), id)
        else:
            self.get_logger().error('Exception while calling get_model_state service: %r' % future.exception())
        
    
    
def main(args=None):
    rclpy.init(args=args)

    tf2_broadcaster = LandmarkTfBroadcaster()

    result_names = tf2_broadcaster.call_get_model_list() # Get list of model_names of obstacles/landmarks
    
    # Loop through the list, get objects data and publish it to the tf tree.
    while rclpy.ok():
        for model in result_names:
            id_obstacle = result_names.index(model) + 1
            tf2_broadcaster.call_get_model_state(model, id_obstacle)
    
    tf2_broadcaster.destroy_node()
    rclpy.shutdown()
        
        
if __name__ == '__main__':
    main()