// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from my_interfaces:msg/LdrLandmarkMsg3D.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "my_interfaces/msg/detail/ldr_landmark_msg3_d__struct.h"
#include "my_interfaces/msg/detail/ldr_landmark_msg3_d__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool my_interfaces__msg__ldr_landmark_msg3_d__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[56];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("my_interfaces.msg._ldr_landmark_msg3_d.LdrLandmarkMsg3D", full_classname_dest, 55) == 0);
  }
  my_interfaces__msg__LdrLandmarkMsg3D * ros_message = _ros_message;
  {  // label
    PyObject * field = PyObject_GetAttrString(_pymsg, "label");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->label = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // range
    PyObject * field = PyObject_GetAttrString(_pymsg, "range");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->range = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // bearing_horizontal
    PyObject * field = PyObject_GetAttrString(_pymsg, "bearing_horizontal");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->bearing_horizontal = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // bearing_vertical
    PyObject * field = PyObject_GetAttrString(_pymsg, "bearing_vertical");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->bearing_vertical = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * my_interfaces__msg__ldr_landmark_msg3_d__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of LdrLandmarkMsg3D */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("my_interfaces.msg._ldr_landmark_msg3_d");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "LdrLandmarkMsg3D");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  my_interfaces__msg__LdrLandmarkMsg3D * ros_message = (my_interfaces__msg__LdrLandmarkMsg3D *)raw_ros_message;
  {  // label
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->label);
    {
      int rc = PyObject_SetAttrString(_pymessage, "label", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // range
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->range);
    {
      int rc = PyObject_SetAttrString(_pymessage, "range", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bearing_horizontal
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->bearing_horizontal);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bearing_horizontal", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bearing_vertical
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->bearing_vertical);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bearing_vertical", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
