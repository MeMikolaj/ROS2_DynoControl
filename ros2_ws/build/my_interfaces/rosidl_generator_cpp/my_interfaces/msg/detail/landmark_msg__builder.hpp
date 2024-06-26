// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_interfaces:msg/LandmarkMsg.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERFACES__MSG__DETAIL__LANDMARK_MSG__BUILDER_HPP_
#define MY_INTERFACES__MSG__DETAIL__LANDMARK_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_interfaces/msg/detail/landmark_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_interfaces
{

namespace msg
{

namespace builder
{

class Init_LandmarkMsg_y
{
public:
  explicit Init_LandmarkMsg_y(::my_interfaces::msg::LandmarkMsg & msg)
  : msg_(msg)
  {}
  ::my_interfaces::msg::LandmarkMsg y(::my_interfaces::msg::LandmarkMsg::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::msg::LandmarkMsg msg_;
};

class Init_LandmarkMsg_x
{
public:
  explicit Init_LandmarkMsg_x(::my_interfaces::msg::LandmarkMsg & msg)
  : msg_(msg)
  {}
  Init_LandmarkMsg_y x(::my_interfaces::msg::LandmarkMsg::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_LandmarkMsg_y(msg_);
  }

private:
  ::my_interfaces::msg::LandmarkMsg msg_;
};

class Init_LandmarkMsg_label
{
public:
  Init_LandmarkMsg_label()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LandmarkMsg_x label(::my_interfaces::msg::LandmarkMsg::_label_type arg)
  {
    msg_.label = std::move(arg);
    return Init_LandmarkMsg_x(msg_);
  }

private:
  ::my_interfaces::msg::LandmarkMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::msg::LandmarkMsg>()
{
  return my_interfaces::msg::builder::Init_LandmarkMsg_label();
}

}  // namespace my_interfaces

#endif  // MY_INTERFACES__MSG__DETAIL__LANDMARK_MSG__BUILDER_HPP_
