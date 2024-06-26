# generated from rosidl_generator_py/resource/_idl.py.em
# with input from my_interfaces:msg/LdrLandmarkMsg3D.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LdrLandmarkMsg3D(type):
    """Metaclass of message 'LdrLandmarkMsg3D'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('my_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'my_interfaces.msg.LdrLandmarkMsg3D')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__ldr_landmark_msg3_d
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__ldr_landmark_msg3_d
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__ldr_landmark_msg3_d
            cls._TYPE_SUPPORT = module.type_support_msg__msg__ldr_landmark_msg3_d
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__ldr_landmark_msg3_d

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LdrLandmarkMsg3D(metaclass=Metaclass_LdrLandmarkMsg3D):
    """Message class 'LdrLandmarkMsg3D'."""

    __slots__ = [
        '_label',
        '_range',
        '_bearing_horizontal',
        '_bearing_vertical',
    ]

    _fields_and_field_types = {
        'label': 'uint64',
        'range': 'float',
        'bearing_horizontal': 'float',
        'bearing_vertical': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.label = kwargs.get('label', int())
        self.range = kwargs.get('range', float())
        self.bearing_horizontal = kwargs.get('bearing_horizontal', float())
        self.bearing_vertical = kwargs.get('bearing_vertical', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.label != other.label:
            return False
        if self.range != other.range:
            return False
        if self.bearing_horizontal != other.bearing_horizontal:
            return False
        if self.bearing_vertical != other.bearing_vertical:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def label(self):
        """Message field 'label'."""
        return self._label

    @label.setter
    def label(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'label' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'label' field must be an unsigned integer in [0, 18446744073709551615]"
        self._label = value

    @builtins.property  # noqa: A003
    def range(self):  # noqa: A003
        """Message field 'range'."""
        return self._range

    @range.setter  # noqa: A003
    def range(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'range' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'range' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._range = value

    @builtins.property
    def bearing_horizontal(self):
        """Message field 'bearing_horizontal'."""
        return self._bearing_horizontal

    @bearing_horizontal.setter
    def bearing_horizontal(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'bearing_horizontal' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'bearing_horizontal' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._bearing_horizontal = value

    @builtins.property
    def bearing_vertical(self):
        """Message field 'bearing_vertical'."""
        return self._bearing_vertical

    @bearing_vertical.setter
    def bearing_vertical(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'bearing_vertical' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'bearing_vertical' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._bearing_vertical = value
