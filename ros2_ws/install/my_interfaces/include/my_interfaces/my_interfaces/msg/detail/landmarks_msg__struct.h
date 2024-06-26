// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_interfaces:msg/LandmarksMsg.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERFACES__MSG__DETAIL__LANDMARKS_MSG__STRUCT_H_
#define MY_INTERFACES__MSG__DETAIL__LANDMARKS_MSG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'landmarks'
#include "my_interfaces/msg/detail/landmark_msg__struct.h"

/// Struct defined in msg/LandmarksMsg in the package my_interfaces.
typedef struct my_interfaces__msg__LandmarksMsg
{
  my_interfaces__msg__LandmarkMsg__Sequence landmarks;
} my_interfaces__msg__LandmarksMsg;

// Struct for a sequence of my_interfaces__msg__LandmarksMsg.
typedef struct my_interfaces__msg__LandmarksMsg__Sequence
{
  my_interfaces__msg__LandmarksMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_interfaces__msg__LandmarksMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_INTERFACES__MSG__DETAIL__LANDMARKS_MSG__STRUCT_H_
