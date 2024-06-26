// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_interfaces:msg/LdrLandmarkMsg2D.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERFACES__MSG__DETAIL__LDR_LANDMARK_MSG2_D__BUILDER_HPP_
#define MY_INTERFACES__MSG__DETAIL__LDR_LANDMARK_MSG2_D__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_interfaces/msg/detail/ldr_landmark_msg2_d__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_interfaces
{

namespace msg
{

namespace builder
{

class Init_LdrLandmarkMsg2D_bearing
{
public:
  explicit Init_LdrLandmarkMsg2D_bearing(::my_interfaces::msg::LdrLandmarkMsg2D & msg)
  : msg_(msg)
  {}
  ::my_interfaces::msg::LdrLandmarkMsg2D bearing(::my_interfaces::msg::LdrLandmarkMsg2D::_bearing_type arg)
  {
    msg_.bearing = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::msg::LdrLandmarkMsg2D msg_;
};

class Init_LdrLandmarkMsg2D_range
{
public:
  explicit Init_LdrLandmarkMsg2D_range(::my_interfaces::msg::LdrLandmarkMsg2D & msg)
  : msg_(msg)
  {}
  Init_LdrLandmarkMsg2D_bearing range(::my_interfaces::msg::LdrLandmarkMsg2D::_range_type arg)
  {
    msg_.range = std::move(arg);
    return Init_LdrLandmarkMsg2D_bearing(msg_);
  }

private:
  ::my_interfaces::msg::LdrLandmarkMsg2D msg_;
};

class Init_LdrLandmarkMsg2D_label
{
public:
  Init_LdrLandmarkMsg2D_label()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LdrLandmarkMsg2D_range label(::my_interfaces::msg::LdrLandmarkMsg2D::_label_type arg)
  {
    msg_.label = std::move(arg);
    return Init_LdrLandmarkMsg2D_range(msg_);
  }

private:
  ::my_interfaces::msg::LdrLandmarkMsg2D msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::msg::LdrLandmarkMsg2D>()
{
  return my_interfaces::msg::builder::Init_LdrLandmarkMsg2D_label();
}

}  // namespace my_interfaces

#endif  // MY_INTERFACES__MSG__DETAIL__LDR_LANDMARK_MSG2_D__BUILDER_HPP_
