# generated from rosidl_generator_py/resource/_idl.py.em
# with input from xicro_interfaces:msg/PoseWithCovariance.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'pose'
# Member 'covariance'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PoseWithCovariance(type):
    """Metaclass of message 'PoseWithCovariance'."""

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
            module = import_type_support('xicro_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'xicro_interfaces.msg.PoseWithCovariance')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__pose_with_covariance
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__pose_with_covariance
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__pose_with_covariance
            cls._TYPE_SUPPORT = module.type_support_msg__msg__pose_with_covariance
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__pose_with_covariance

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PoseWithCovariance(metaclass=Metaclass_PoseWithCovariance):
    """Message class 'PoseWithCovariance'."""

    __slots__ = [
        '_pose',
        '_covariance',
    ]

    _fields_and_field_types = {
        'pose': 'float[3]',
        'covariance': 'float[36]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 36),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        if 'pose' not in kwargs:
            self.pose = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.pose = numpy.array(kwargs.get('pose'), dtype=numpy.float32)
            assert self.pose.shape == (3, )
        if 'covariance' not in kwargs:
            self.covariance = numpy.zeros(36, dtype=numpy.float32)
        else:
            self.covariance = numpy.array(kwargs.get('covariance'), dtype=numpy.float32)
            assert self.covariance.shape == (36, )

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
        if all(self.pose != other.pose):
            return False
        if all(self.covariance != other.covariance):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def pose(self):
        """Message field 'pose'."""
        return self._pose

    @pose.setter
    def pose(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'pose' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'pose' numpy.ndarray() must have a size of 3"
            self._pose = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 3 and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'pose' field must be a set or sequence with length 3 and each value of type 'float'"
        self._pose = numpy.array(value, dtype=numpy.float32)

    @property
    def covariance(self):
        """Message field 'covariance'."""
        return self._covariance

    @covariance.setter
    def covariance(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'covariance' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 36, \
                "The 'covariance' numpy.ndarray() must have a size of 36"
            self._covariance = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 36 and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'covariance' field must be a set or sequence with length 36 and each value of type 'float'"
        self._covariance = numpy.array(value, dtype=numpy.float32)
