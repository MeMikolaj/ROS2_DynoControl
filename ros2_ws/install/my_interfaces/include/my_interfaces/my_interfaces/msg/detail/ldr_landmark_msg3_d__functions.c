// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from my_interfaces:msg/LdrLandmarkMsg3D.idl
// generated code does not contain a copyright notice
#include "my_interfaces/msg/detail/ldr_landmark_msg3_d__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
my_interfaces__msg__LdrLandmarkMsg3D__init(my_interfaces__msg__LdrLandmarkMsg3D * msg)
{
  if (!msg) {
    return false;
  }
  // label
  // range
  // bearing_horizontal
  // bearing_vertical
  return true;
}

void
my_interfaces__msg__LdrLandmarkMsg3D__fini(my_interfaces__msg__LdrLandmarkMsg3D * msg)
{
  if (!msg) {
    return;
  }
  // label
  // range
  // bearing_horizontal
  // bearing_vertical
}

bool
my_interfaces__msg__LdrLandmarkMsg3D__are_equal(const my_interfaces__msg__LdrLandmarkMsg3D * lhs, const my_interfaces__msg__LdrLandmarkMsg3D * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // label
  if (lhs->label != rhs->label) {
    return false;
  }
  // range
  if (lhs->range != rhs->range) {
    return false;
  }
  // bearing_horizontal
  if (lhs->bearing_horizontal != rhs->bearing_horizontal) {
    return false;
  }
  // bearing_vertical
  if (lhs->bearing_vertical != rhs->bearing_vertical) {
    return false;
  }
  return true;
}

bool
my_interfaces__msg__LdrLandmarkMsg3D__copy(
  const my_interfaces__msg__LdrLandmarkMsg3D * input,
  my_interfaces__msg__LdrLandmarkMsg3D * output)
{
  if (!input || !output) {
    return false;
  }
  // label
  output->label = input->label;
  // range
  output->range = input->range;
  // bearing_horizontal
  output->bearing_horizontal = input->bearing_horizontal;
  // bearing_vertical
  output->bearing_vertical = input->bearing_vertical;
  return true;
}

my_interfaces__msg__LdrLandmarkMsg3D *
my_interfaces__msg__LdrLandmarkMsg3D__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_interfaces__msg__LdrLandmarkMsg3D * msg = (my_interfaces__msg__LdrLandmarkMsg3D *)allocator.allocate(sizeof(my_interfaces__msg__LdrLandmarkMsg3D), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_interfaces__msg__LdrLandmarkMsg3D));
  bool success = my_interfaces__msg__LdrLandmarkMsg3D__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
my_interfaces__msg__LdrLandmarkMsg3D__destroy(my_interfaces__msg__LdrLandmarkMsg3D * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    my_interfaces__msg__LdrLandmarkMsg3D__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
my_interfaces__msg__LdrLandmarkMsg3D__Sequence__init(my_interfaces__msg__LdrLandmarkMsg3D__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_interfaces__msg__LdrLandmarkMsg3D * data = NULL;

  if (size) {
    data = (my_interfaces__msg__LdrLandmarkMsg3D *)allocator.zero_allocate(size, sizeof(my_interfaces__msg__LdrLandmarkMsg3D), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_interfaces__msg__LdrLandmarkMsg3D__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_interfaces__msg__LdrLandmarkMsg3D__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
my_interfaces__msg__LdrLandmarkMsg3D__Sequence__fini(my_interfaces__msg__LdrLandmarkMsg3D__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      my_interfaces__msg__LdrLandmarkMsg3D__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

my_interfaces__msg__LdrLandmarkMsg3D__Sequence *
my_interfaces__msg__LdrLandmarkMsg3D__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_interfaces__msg__LdrLandmarkMsg3D__Sequence * array = (my_interfaces__msg__LdrLandmarkMsg3D__Sequence *)allocator.allocate(sizeof(my_interfaces__msg__LdrLandmarkMsg3D__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = my_interfaces__msg__LdrLandmarkMsg3D__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
my_interfaces__msg__LdrLandmarkMsg3D__Sequence__destroy(my_interfaces__msg__LdrLandmarkMsg3D__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    my_interfaces__msg__LdrLandmarkMsg3D__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
my_interfaces__msg__LdrLandmarkMsg3D__Sequence__are_equal(const my_interfaces__msg__LdrLandmarkMsg3D__Sequence * lhs, const my_interfaces__msg__LdrLandmarkMsg3D__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!my_interfaces__msg__LdrLandmarkMsg3D__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
my_interfaces__msg__LdrLandmarkMsg3D__Sequence__copy(
  const my_interfaces__msg__LdrLandmarkMsg3D__Sequence * input,
  my_interfaces__msg__LdrLandmarkMsg3D__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(my_interfaces__msg__LdrLandmarkMsg3D);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    my_interfaces__msg__LdrLandmarkMsg3D * data =
      (my_interfaces__msg__LdrLandmarkMsg3D *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!my_interfaces__msg__LdrLandmarkMsg3D__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          my_interfaces__msg__LdrLandmarkMsg3D__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!my_interfaces__msg__LdrLandmarkMsg3D__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
