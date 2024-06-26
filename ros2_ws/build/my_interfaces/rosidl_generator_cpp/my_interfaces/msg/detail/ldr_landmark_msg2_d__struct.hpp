// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_interfaces:msg/LdrLandmarkMsg2D.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERFACES__MSG__DETAIL__LDR_LANDMARK_MSG2_D__STRUCT_HPP_
#define MY_INTERFACES__MSG__DETAIL__LDR_LANDMARK_MSG2_D__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__my_interfaces__msg__LdrLandmarkMsg2D __attribute__((deprecated))
#else
# define DEPRECATED__my_interfaces__msg__LdrLandmarkMsg2D __declspec(deprecated)
#endif

namespace my_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LdrLandmarkMsg2D_
{
  using Type = LdrLandmarkMsg2D_<ContainerAllocator>;

  explicit LdrLandmarkMsg2D_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->label = 0ull;
      this->range = 0.0f;
      this->bearing = 0.0f;
    }
  }

  explicit LdrLandmarkMsg2D_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->label = 0ull;
      this->range = 0.0f;
      this->bearing = 0.0f;
    }
  }

  // field types and members
  using _label_type =
    uint64_t;
  _label_type label;
  using _range_type =
    float;
  _range_type range;
  using _bearing_type =
    float;
  _bearing_type bearing;

  // setters for named parameter idiom
  Type & set__label(
    const uint64_t & _arg)
  {
    this->label = _arg;
    return *this;
  }
  Type & set__range(
    const float & _arg)
  {
    this->range = _arg;
    return *this;
  }
  Type & set__bearing(
    const float & _arg)
  {
    this->bearing = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_interfaces::msg::LdrLandmarkMsg2D_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_interfaces::msg::LdrLandmarkMsg2D_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_interfaces::msg::LdrLandmarkMsg2D_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_interfaces::msg::LdrLandmarkMsg2D_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_interfaces::msg::LdrLandmarkMsg2D_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_interfaces::msg::LdrLandmarkMsg2D_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_interfaces::msg::LdrLandmarkMsg2D_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_interfaces::msg::LdrLandmarkMsg2D_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_interfaces::msg::LdrLandmarkMsg2D_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_interfaces::msg::LdrLandmarkMsg2D_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_interfaces__msg__LdrLandmarkMsg2D
    std::shared_ptr<my_interfaces::msg::LdrLandmarkMsg2D_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_interfaces__msg__LdrLandmarkMsg2D
    std::shared_ptr<my_interfaces::msg::LdrLandmarkMsg2D_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LdrLandmarkMsg2D_ & other) const
  {
    if (this->label != other.label) {
      return false;
    }
    if (this->range != other.range) {
      return false;
    }
    if (this->bearing != other.bearing) {
      return false;
    }
    return true;
  }
  bool operator!=(const LdrLandmarkMsg2D_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LdrLandmarkMsg2D_

// alias to use template instance with default allocator
using LdrLandmarkMsg2D =
  my_interfaces::msg::LdrLandmarkMsg2D_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace my_interfaces

#endif  // MY_INTERFACES__MSG__DETAIL__LDR_LANDMARK_MSG2_D__STRUCT_HPP_
