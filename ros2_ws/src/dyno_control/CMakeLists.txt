cmake_minimum_required(VERSION 3.8)

project(dyno_control)

# set(CMAKE_C_FLAGS "-std=gnu11 -Wall -Wextra -O3 -march=sandybridge -flto")
set(CMAKE_C_FLAGS "-Wall -Wextra")

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

set(CMAKE_CXX_STANDARD 17)

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclpy REQUIRED)
find_package(ament_cmake_python REQUIRED)
find_package(my_interfaces REQUIRED)

install(DIRECTORY
  launch scripts dyno_control
  DESTINATION share/${PROJECT_NAME}
)

#install python scripts/modules
ament_python_install_package(${PROJECT_NAME})

# Install Python executables
install(PROGRAMS
  scripts/pipeline_node.py
  scripts/gazebo_landmark_tf_broadcaster.py
  scripts/gazebo_sensor_simulator.py
  DESTINATION lib/${PROJECT_NAME}
)


ament_package()