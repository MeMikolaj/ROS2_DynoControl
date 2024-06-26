
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist


class Pipeline(Node):
    def __init__(self):
        super().__init__('main_pipeline')
        self.lidar_subscriber = self.create_subscription(Twist, 'topic', self.lidar_callback, 10)
        
        self.control_publisher   = self.create_publisher(Twist, 'cmd_vel', 10)
        self.publisher_timer  = self.create_timer(1, self.publisherTimer_callback)
        self.get_logger().info("Main Pipeline has been started")
        
        

    def publisherTimer_callback(self):
        
        msg = Twist()
        msg.linear.y = 0.0; msg.linear.z = 0.0; msg.angular.x = 0.0; msg.angular.y = 0.0
        # For 2D Turtle Bot only need those 2 values
        msg.linear.x = 0.2
        msg.angular.z = -0.1
        self.control_publisher.publish(msg)
        #self.get_logger().info(f"Publishing: \nLinear: %s, \nAngular %s" % (msg.linear, msg.linear))
    

    
    def lidar_callback(self, msg):
        self.get_logger().info(msg.data)
        # 1. When received a sensor data, quickly calculate current pose. 
        # 2. Add them to the graph # Here need to find a awy they are the same :(
        # 3. Optimize
        # *3.5 Do some planning/Replanning depending if we are succesfully followig the traj
        # 4. Calculate the control commands
        # 5. Publish the control commands
        ...

