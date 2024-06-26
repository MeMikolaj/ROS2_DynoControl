// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_interfaces:msg/LandmarkMsg.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERFACES__MSG__DETAIL__LANDMARK_MSG__STRUCT_HPP_
#define MY_INTERFACES__MSG__DETAIL__LANDMARK_MSG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__my_interfaces__msg__LandmarkMsg __attribute__((deprecated))
#else
# define DEPRECATED__my_interfaces__msg__LandmarkMsg __declspec(deprecated)
#endif

namespace my_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LandmarkMsg_
{
  using Type = LandmarkMsg_<ContainerAllocator>;

  explicit LandmarkMsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->label = 0ull;
      this->x = 0.0f;
      this->y = 0.0f;
    }
  }

  explicit LandmarkMsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->label = 0ull;
      this->x = 0.0f;
      this->y = 0.0f;
    }
  }

  // field types and members
  using _label_type =
    uint64_t;
  _label_type label;
  using _x_type =
    float;
  _x_type x;
  using _y_type =
    float;
  _y_type y;

  // setters for named parameter idiom
  Type & set__label(
    const uint64_t & _arg)
  {
    this->label = _arg;
    return *this;
  }
  Type & set__x(
    const float & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const float & _arg)
  {
    this->y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_interfaces::msg::LandmarkMsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_interfaces::msg::LandmarkMsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_interfaces::msg::LandmarkMsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_interfaces::msg::LandmarkMsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_interfaces::msg::LandmarkMsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_interfaces::msg::LandmarkMsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_interfaces::msg::LandmarkMsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_interfaces::msg::LandmarkMsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_interfaces::msg::LandmarkMsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_interfaces::msg::LandmarkMsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_interfaces__msg__LandmarkMsg
    std::shared_ptr<my_interfaces::msg::LandmarkMsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_interfaces__msg__LandmarkMsg
    std::shared_ptr<my_interfaces::msg::LandmarkMsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LandmarkMsg_ & other) const
  {
    if (this->label != other.label) {
      return false;
    }
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    return true;
  }
  bool operator!=(const LandmarkMsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LandmarkMsg_

// alias to use template instance with default allocator
using LandmarkMsg =
  my_interfaces::msg::LandmarkMsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace my_interfaces

#endif  // MY_INTERFACES__MSG__DETAIL__LANDMARK_MSG__STRUCT_HPP_
