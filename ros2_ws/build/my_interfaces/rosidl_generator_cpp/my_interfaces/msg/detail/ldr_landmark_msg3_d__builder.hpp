// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_interfaces:msg/LdrLandmarkMsg3D.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERFACES__MSG__DETAIL__LDR_LANDMARK_MSG3_D__BUILDER_HPP_
#define MY_INTERFACES__MSG__DETAIL__LDR_LANDMARK_MSG3_D__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_interfaces/msg/detail/ldr_landmark_msg3_d__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_interfaces
{

namespace msg
{

namespace builder
{

class Init_LdrLandmarkMsg3D_bearing_vertical
{
public:
  explicit Init_LdrLandmarkMsg3D_bearing_vertical(::my_interfaces::msg::LdrLandmarkMsg3D & msg)
  : msg_(msg)
  {}
  ::my_interfaces::msg::LdrLandmarkMsg3D bearing_vertical(::my_interfaces::msg::LdrLandmarkMsg3D::_bearing_vertical_type arg)
  {
    msg_.bearing_vertical = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::msg::LdrLandmarkMsg3D msg_;
};

class Init_LdrLandmarkMsg3D_bearing_horizontal
{
public:
  explicit Init_LdrLandmarkMsg3D_bearing_horizontal(::my_interfaces::msg::LdrLandmarkMsg3D & msg)
  : msg_(msg)
  {}
  Init_LdrLandmarkMsg3D_bearing_vertical bearing_horizontal(::my_interfaces::msg::LdrLandmarkMsg3D::_bearing_horizontal_type arg)
  {
    msg_.bearing_horizontal = std::move(arg);
    return Init_LdrLandmarkMsg3D_bearing_vertical(msg_);
  }

private:
  ::my_interfaces::msg::LdrLandmarkMsg3D msg_;
};

class Init_LdrLandmarkMsg3D_range
{
public:
  explicit Init_LdrLandmarkMsg3D_range(::my_interfaces::msg::LdrLandmarkMsg3D & msg)
  : msg_(msg)
  {}
  Init_LdrLandmarkMsg3D_bearing_horizontal range(::my_interfaces::msg::LdrLandmarkMsg3D::_range_type arg)
  {
    msg_.range = std::move(arg);
    return Init_LdrLandmarkMsg3D_bearing_horizontal(msg_);
  }

private:
  ::my_interfaces::msg::LdrLandmarkMsg3D msg_;
};

class Init_LdrLandmarkMsg3D_label
{
public:
  Init_LdrLandmarkMsg3D_label()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LdrLandmarkMsg3D_range label(::my_interfaces::msg::LdrLandmarkMsg3D::_label_type arg)
  {
    msg_.label = std::move(arg);
    return Init_LdrLandmarkMsg3D_range(msg_);
  }

private:
  ::my_interfaces::msg::LdrLandmarkMsg3D msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::msg::LdrLandmarkMsg3D>()
{
  return my_interfaces::msg::builder::Init_LdrLandmarkMsg3D_label();
}

}  // namespace my_interfaces

#endif  // MY_INTERFACES__MSG__DETAIL__LDR_LANDMARK_MSG3_D__BUILDER_HPP_
