// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_interfaces:msg/LdrLandmarksMsg2D.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERFACES__MSG__DETAIL__LDR_LANDMARKS_MSG2_D__STRUCT_H_
#define MY_INTERFACES__MSG__DETAIL__LDR_LANDMARKS_MSG2_D__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'landmarks2d'
#include "my_interfaces/msg/detail/ldr_landmark_msg2_d__struct.h"

/// Struct defined in msg/LdrLandmarksMsg2D in the package my_interfaces.
typedef struct my_interfaces__msg__LdrLandmarksMsg2D
{
  my_interfaces__msg__LdrLandmarkMsg2D__Sequence landmarks2d;
} my_interfaces__msg__LdrLandmarksMsg2D;

// Struct for a sequence of my_interfaces__msg__LdrLandmarksMsg2D.
typedef struct my_interfaces__msg__LdrLandmarksMsg2D__Sequence
{
  my_interfaces__msg__LdrLandmarksMsg2D * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_interfaces__msg__LdrLandmarksMsg2D__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_INTERFACES__MSG__DETAIL__LDR_LANDMARKS_MSG2_D__STRUCT_H_
