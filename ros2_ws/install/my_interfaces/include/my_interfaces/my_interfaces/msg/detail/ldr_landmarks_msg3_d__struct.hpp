// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_interfaces:msg/LdrLandmarksMsg3D.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERFACES__MSG__DETAIL__LDR_LANDMARKS_MSG3_D__STRUCT_HPP_
#define MY_INTERFACES__MSG__DETAIL__LDR_LANDMARKS_MSG3_D__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'landmarks3d'
#include "my_interfaces/msg/detail/ldr_landmark_msg3_d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__my_interfaces__msg__LdrLandmarksMsg3D __attribute__((deprecated))
#else
# define DEPRECATED__my_interfaces__msg__LdrLandmarksMsg3D __declspec(deprecated)
#endif

namespace my_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LdrLandmarksMsg3D_
{
  using Type = LdrLandmarksMsg3D_<ContainerAllocator>;

  explicit LdrLandmarksMsg3D_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit LdrLandmarksMsg3D_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _landmarks3d_type =
    std::vector<my_interfaces::msg::LdrLandmarkMsg3D_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<my_interfaces::msg::LdrLandmarkMsg3D_<ContainerAllocator>>>;
  _landmarks3d_type landmarks3d;

  // setters for named parameter idiom
  Type & set__landmarks3d(
    const std::vector<my_interfaces::msg::LdrLandmarkMsg3D_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<my_interfaces::msg::LdrLandmarkMsg3D_<ContainerAllocator>>> & _arg)
  {
    this->landmarks3d = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_interfaces::msg::LdrLandmarksMsg3D_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_interfaces::msg::LdrLandmarksMsg3D_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_interfaces::msg::LdrLandmarksMsg3D_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_interfaces::msg::LdrLandmarksMsg3D_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_interfaces::msg::LdrLandmarksMsg3D_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_interfaces::msg::LdrLandmarksMsg3D_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_interfaces::msg::LdrLandmarksMsg3D_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_interfaces::msg::LdrLandmarksMsg3D_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_interfaces::msg::LdrLandmarksMsg3D_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_interfaces::msg::LdrLandmarksMsg3D_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_interfaces__msg__LdrLandmarksMsg3D
    std::shared_ptr<my_interfaces::msg::LdrLandmarksMsg3D_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_interfaces__msg__LdrLandmarksMsg3D
    std::shared_ptr<my_interfaces::msg::LdrLandmarksMsg3D_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LdrLandmarksMsg3D_ & other) const
  {
    if (this->landmarks3d != other.landmarks3d) {
      return false;
    }
    return true;
  }
  bool operator!=(const LdrLandmarksMsg3D_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LdrLandmarksMsg3D_

// alias to use template instance with default allocator
using LdrLandmarksMsg3D =
  my_interfaces::msg::LdrLandmarksMsg3D_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace my_interfaces

#endif  // MY_INTERFACES__MSG__DETAIL__LDR_LANDMARKS_MSG3_D__STRUCT_HPP_
