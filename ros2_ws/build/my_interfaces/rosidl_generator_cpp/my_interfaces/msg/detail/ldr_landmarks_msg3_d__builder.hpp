// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_interfaces:msg/LdrLandmarksMsg3D.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERFACES__MSG__DETAIL__LDR_LANDMARKS_MSG3_D__BUILDER_HPP_
#define MY_INTERFACES__MSG__DETAIL__LDR_LANDMARKS_MSG3_D__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_interfaces/msg/detail/ldr_landmarks_msg3_d__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_interfaces
{

namespace msg
{

namespace builder
{

class Init_LdrLandmarksMsg3D_landmarks3d
{
public:
  Init_LdrLandmarksMsg3D_landmarks3d()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_interfaces::msg::LdrLandmarksMsg3D landmarks3d(::my_interfaces::msg::LdrLandmarksMsg3D::_landmarks3d_type arg)
  {
    msg_.landmarks3d = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::msg::LdrLandmarksMsg3D msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::msg::LdrLandmarksMsg3D>()
{
  return my_interfaces::msg::builder::Init_LdrLandmarksMsg3D_landmarks3d();
}

}  // namespace my_interfaces

#endif  // MY_INTERFACES__MSG__DETAIL__LDR_LANDMARKS_MSG3_D__BUILDER_HPP_
