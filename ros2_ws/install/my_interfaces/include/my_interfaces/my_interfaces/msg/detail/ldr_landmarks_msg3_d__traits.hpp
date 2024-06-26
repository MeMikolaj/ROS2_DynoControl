// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_interfaces:msg/LdrLandmarksMsg3D.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERFACES__MSG__DETAIL__LDR_LANDMARKS_MSG3_D__TRAITS_HPP_
#define MY_INTERFACES__MSG__DETAIL__LDR_LANDMARKS_MSG3_D__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_interfaces/msg/detail/ldr_landmarks_msg3_d__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'landmarks3d'
#include "my_interfaces/msg/detail/ldr_landmark_msg3_d__traits.hpp"

namespace my_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const LdrLandmarksMsg3D & msg,
  std::ostream & out)
{
  out << "{";
  // member: landmarks3d
  {
    if (msg.landmarks3d.size() == 0) {
      out << "landmarks3d: []";
    } else {
      out << "landmarks3d: [";
      size_t pending_items = msg.landmarks3d.size();
      for (auto item : msg.landmarks3d) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LdrLandmarksMsg3D & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: landmarks3d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.landmarks3d.size() == 0) {
      out << "landmarks3d: []\n";
    } else {
      out << "landmarks3d:\n";
      for (auto item : msg.landmarks3d) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LdrLandmarksMsg3D & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace my_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use my_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_interfaces::msg::LdrLandmarksMsg3D & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const my_interfaces::msg::LdrLandmarksMsg3D & msg)
{
  return my_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<my_interfaces::msg::LdrLandmarksMsg3D>()
{
  return "my_interfaces::msg::LdrLandmarksMsg3D";
}

template<>
inline const char * name<my_interfaces::msg::LdrLandmarksMsg3D>()
{
  return "my_interfaces/msg/LdrLandmarksMsg3D";
}

template<>
struct has_fixed_size<my_interfaces::msg::LdrLandmarksMsg3D>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<my_interfaces::msg::LdrLandmarksMsg3D>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<my_interfaces::msg::LdrLandmarksMsg3D>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MY_INTERFACES__MSG__DETAIL__LDR_LANDMARKS_MSG3_D__TRAITS_HPP_
