// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_interfaces:msg/LandmarksMsg.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERFACES__MSG__DETAIL__LANDMARKS_MSG__STRUCT_HPP_
#define MY_INTERFACES__MSG__DETAIL__LANDMARKS_MSG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'landmarks'
#include "my_interfaces/msg/detail/landmark_msg__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__my_interfaces__msg__LandmarksMsg __attribute__((deprecated))
#else
# define DEPRECATED__my_interfaces__msg__LandmarksMsg __declspec(deprecated)
#endif

namespace my_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LandmarksMsg_
{
  using Type = LandmarksMsg_<ContainerAllocator>;

  explicit LandmarksMsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit LandmarksMsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _landmarks_type =
    std::vector<my_interfaces::msg::LandmarkMsg_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<my_interfaces::msg::LandmarkMsg_<ContainerAllocator>>>;
  _landmarks_type landmarks;

  // setters for named parameter idiom
  Type & set__landmarks(
    const std::vector<my_interfaces::msg::LandmarkMsg_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<my_interfaces::msg::LandmarkMsg_<ContainerAllocator>>> & _arg)
  {
    this->landmarks = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_interfaces::msg::LandmarksMsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_interfaces::msg::LandmarksMsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_interfaces::msg::LandmarksMsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_interfaces::msg::LandmarksMsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_interfaces::msg::LandmarksMsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_interfaces::msg::LandmarksMsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_interfaces::msg::LandmarksMsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_interfaces::msg::LandmarksMsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_interfaces::msg::LandmarksMsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_interfaces::msg::LandmarksMsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_interfaces__msg__LandmarksMsg
    std::shared_ptr<my_interfaces::msg::LandmarksMsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_interfaces__msg__LandmarksMsg
    std::shared_ptr<my_interfaces::msg::LandmarksMsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LandmarksMsg_ & other) const
  {
    if (this->landmarks != other.landmarks) {
      return false;
    }
    return true;
  }
  bool operator!=(const LandmarksMsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LandmarksMsg_

// alias to use template instance with default allocator
using LandmarksMsg =
  my_interfaces::msg::LandmarksMsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace my_interfaces

#endif  // MY_INTERFACES__MSG__DETAIL__LANDMARKS_MSG__STRUCT_HPP_
