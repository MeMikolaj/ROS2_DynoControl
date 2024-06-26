#!/usr/bin/env python3

import rclpy
import time

from rclpy.node import Node
from gazebo_msgs.srv import GetEntityState, SetModelState, GetModelList
from gazebo_msgs.msg import ModelState
from geometry_msgs.msg import Pose, Twist
import tf2_ros

CONST_ROBOTS_NAME = 'my_turtlebot'

class GazeboLandmarkPublisher(Node):

    def __init__(self):
        super().__init__('gazebo_landmark_publisher')

        self.get_model_list_client = self.create_client(GetModelList, '/get_model_list')
        while not self.get_model_list_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('/get_model_list service not available, waiting again...')

        # Create a client for the '/get_entity_state' service
        self.get_model_state_client = self.create_client(GetEntityState, '/gazebo/get_entity_state')
        while not self.get_model_state_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('/get_entity_state service not available, waiting again...')


        # Create a landmark publisher for ground truth data
        self.ground_truth_landmark_publisher = self.create_publisher(Twist, 'ground_truth_landmark', 10)
        
        # Create a landmark publisher for sensor data in range
        self.sensor_landmark_publisher = self.create_publisher(Pose, 'sensor_landmark', 10)

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

    def call_get_model_state(self, model_name):
        request = GetEntityState.Request(name=model_name, reference_frame=CONST_ROBOTS_NAME) # Get it in the Robot's frame (or 'world' frame)
        # request.model_name = model_name
        self.get_logger().info(f"Requesting model {model_name}")

        future = self.get_model_state_client.call_async(request)
        rclpy.spin_until_future_complete(self, future)
        
        if future.result() is not None:
            self.get_logger().info(f"Model state: {future.result()}")
        else:
            self.get_logger().error('Exception while calling get_model_state service: %r' % future.exception())
    
    
def main(args=None):
    rclpy.init(args=args)
    time.sleep(3)
    

    glp = GazeboLandmarkPublisher()

    result_names = glp.call_get_model_list()
    while True:
        for model in result_names:
            glp.call_get_model_state(model)
        time.sleep(0.5)
if __name__ == '__main__':
    main()