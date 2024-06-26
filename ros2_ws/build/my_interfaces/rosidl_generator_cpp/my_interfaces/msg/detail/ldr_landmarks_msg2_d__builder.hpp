// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_interfaces:msg/LdrLandmarksMsg2D.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERFACES__MSG__DETAIL__LDR_LANDMARKS_MSG2_D__BUILDER_HPP_
#define MY_INTERFACES__MSG__DETAIL__LDR_LANDMARKS_MSG2_D__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_interfaces/msg/detail/ldr_landmarks_msg2_d__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_interfaces
{

namespace msg
{

namespace builder
{

class Init_LdrLandmarksMsg2D_landmarks2d
{
public:
  Init_LdrLandmarksMsg2D_landmarks2d()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_interfaces::msg::LdrLandmarksMsg2D landmarks2d(::my_interfaces::msg::LdrLandmarksMsg2D::_landmarks2d_type arg)
  {
    msg_.landmarks2d = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::msg::LdrLandmarksMsg2D msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::msg::LdrLandmarksMsg2D>()
{
  return my_interfaces::msg::builder::Init_LdrLandmarksMsg2D_landmarks2d();
}

}  // namespace my_interfaces

#endif  // MY_INTERFACES__MSG__DETAIL__LDR_LANDMARKS_MSG2_D__BUILDER_HPP_
