// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_interfaces:msg/LdrLandmarksMsg2D.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERFACES__MSG__DETAIL__LDR_LANDMARKS_MSG2_D__STRUCT_HPP_
#define MY_INTERFACES__MSG__DETAIL__LDR_LANDMARKS_MSG2_D__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'landmarks2d'
#include "my_interfaces/msg/detail/ldr_landmark_msg2_d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__my_interfaces__msg__LdrLandmarksMsg2D __attribute__((deprecated))
#else
# define DEPRECATED__my_interfaces__msg__LdrLandmarksMsg2D __declspec(deprecated)
#endif

namespace my_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LdrLandmarksMsg2D_
{
  using Type = LdrLandmarksMsg2D_<ContainerAllocator>;

  explicit LdrLandmarksMsg2D_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit LdrLandmarksMsg2D_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _landmarks2d_type =
    std::vector<my_interfaces::msg::LdrLandmarkMsg2D_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<my_interfaces::msg::LdrLandmarkMsg2D_<ContainerAllocator>>>;
  _landmarks2d_type landmarks2d;

  // setters for named parameter idiom
  Type & set__landmarks2d(
    const std::vector<my_interfaces::msg::LdrLandmarkMsg2D_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<my_interfaces::msg::LdrLandmarkMsg2D_<ContainerAllocator>>> & _arg)
  {
    this->landmarks2d = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_interfaces::msg::LdrLandmarksMsg2D_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_interfaces::msg::LdrLandmarksMsg2D_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_interfaces::msg::LdrLandmarksMsg2D_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_interfaces::msg::LdrLandmarksMsg2D_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_interfaces::msg::LdrLandmarksMsg2D_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_interfaces::msg::LdrLandmarksMsg2D_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_interfaces::msg::LdrLandmarksMsg2D_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_interfaces::msg::LdrLandmarksMsg2D_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_interfaces::msg::LdrLandmarksMsg2D_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_interfaces::msg::LdrLandmarksMsg2D_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_interfaces__msg__LdrLandmarksMsg2D
    std::shared_ptr<my_interfaces::msg::LdrLandmarksMsg2D_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_interfaces__msg__LdrLandmarksMsg2D
    std::shared_ptr<my_interfaces::msg::LdrLandmarksMsg2D_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LdrLandmarksMsg2D_ & other) const
  {
    if (this->landmarks2d != other.landmarks2d) {
      return false;
    }
    return true;
  }
  bool operator!=(const LdrLandmarksMsg2D_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LdrLandmarksMsg2D_

// alias to use template instance with default allocator
using LdrLandmarksMsg2D =
  my_interfaces::msg::LdrLandmarksMsg2D_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace my_interfaces

#endif  // MY_INTERFACES__MSG__DETAIL__LDR_LANDMARKS_MSG2_D__STRUCT_HPP_
