// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_interfaces:msg/LdrLandmarkMsg3D.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERFACES__MSG__DETAIL__LDR_LANDMARK_MSG3_D__STRUCT_H_
#define MY_INTERFACES__MSG__DETAIL__LDR_LANDMARK_MSG3_D__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/LdrLandmarkMsg3D in the package my_interfaces.
typedef struct my_interfaces__msg__LdrLandmarkMsg3D
{
  uint64_t label;
  float range;
  float bearing_horizontal;
  float bearing_vertical;
} my_interfaces__msg__LdrLandmarkMsg3D;

// Struct for a sequence of my_interfaces__msg__LdrLandmarkMsg3D.
typedef struct my_interfaces__msg__LdrLandmarkMsg3D__Sequence
{
  my_interfaces__msg__LdrLandmarkMsg3D * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_interfaces__msg__LdrLandmarkMsg3D__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_INTERFACES__MSG__DETAIL__LDR_LANDMARK_MSG3_D__STRUCT_H_
