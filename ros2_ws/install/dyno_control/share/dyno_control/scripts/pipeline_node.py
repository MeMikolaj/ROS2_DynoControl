#!/usr/bin/env python3

import rclpy
from dyno_control.pipeline import Pipeline

def main(args=None):
    rclpy.init(args=args)

    main_pipeline = Pipeline()

    rclpy.spin(main_pipeline)
    
    main_pipeline.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()