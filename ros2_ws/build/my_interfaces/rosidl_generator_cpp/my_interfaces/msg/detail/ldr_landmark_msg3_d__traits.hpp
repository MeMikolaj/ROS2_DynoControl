// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_interfaces:msg/LdrLandmarkMsg3D.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERFACES__MSG__DETAIL__LDR_LANDMARK_MSG3_D__TRAITS_HPP_
#define MY_INTERFACES__MSG__DETAIL__LDR_LANDMARK_MSG3_D__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_interfaces/msg/detail/ldr_landmark_msg3_d__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace my_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const LdrLandmarkMsg3D & msg,
  std::ostream & out)
{
  out << "{";
  // member: label
  {
    out << "label: ";
    rosidl_generator_traits::value_to_yaml(msg.label, out);
    out << ", ";
  }

  // member: range
  {
    out << "range: ";
    rosidl_generator_traits::value_to_yaml(msg.range, out);
    out << ", ";
  }

  // member: bearing_horizontal
  {
    out << "bearing_horizontal: ";
    rosidl_generator_traits::value_to_yaml(msg.bearing_horizontal, out);
    out << ", ";
  }

  // member: bearing_vertical
  {
    out << "bearing_vertical: ";
    rosidl_generator_traits::value_to_yaml(msg.bearing_vertical, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LdrLandmarkMsg3D & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: label
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "label: ";
    rosidl_generator_traits::value_to_yaml(msg.label, out);
    out << "\n";
  }

  // member: range
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "range: ";
    rosidl_generator_traits::value_to_yaml(msg.range, out);
    out << "\n";
  }

  // member: bearing_horizontal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bearing_horizontal: ";
    rosidl_generator_traits::value_to_yaml(msg.bearing_horizontal, out);
    out << "\n";
  }

  // member: bearing_vertical
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bearing_vertical: ";
    rosidl_generator_traits::value_to_yaml(msg.bearing_vertical, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LdrLandmarkMsg3D & msg, bool use_flow_style = false)
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
  const my_interfaces::msg::LdrLandmarkMsg3D & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const my_interfaces::msg::LdrLandmarkMsg3D & msg)
{
  return my_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<my_interfaces::msg::LdrLandmarkMsg3D>()
{
  return "my_interfaces::msg::LdrLandmarkMsg3D";
}

template<>
inline const char * name<my_interfaces::msg::LdrLandmarkMsg3D>()
{
  return "my_interfaces/msg/LdrLandmarkMsg3D";
}

template<>
struct has_fixed_size<my_interfaces::msg::LdrLandmarkMsg3D>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<my_interfaces::msg::LdrLandmarkMsg3D>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<my_interfaces::msg::LdrLandmarkMsg3D>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MY_INTERFACES__MSG__DETAIL__LDR_LANDMARK_MSG3_D__TRAITS_HPP_
