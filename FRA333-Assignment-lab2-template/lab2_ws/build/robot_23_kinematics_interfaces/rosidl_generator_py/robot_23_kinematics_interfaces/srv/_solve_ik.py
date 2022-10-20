# generated from rosidl_generator_py/resource/_idl.py.em
# with input from robot_23_kinematics_interfaces:srv/SolveIK.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'gamma'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SolveIK_Request(type):
    """Metaclass of message 'SolveIK_Request'."""

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
            module = import_type_support('robot_23_kinematics_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'robot_23_kinematics_interfaces.srv.SolveIK_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__solve_ik__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__solve_ik__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__solve_ik__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__solve_ik__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__solve_ik__request

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SolveIK_Request(metaclass=Metaclass_SolveIK_Request):
    """Message class 'SolveIK_Request'."""

    __slots__ = [
        '_point',
        '_gamma',
    ]

    _fields_and_field_types = {
        'point': 'geometry_msgs/Point',
        'gamma': 'int32[2]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('int32'), 2),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from geometry_msgs.msg import Point
        self.point = kwargs.get('point', Point())
        if 'gamma' not in kwargs:
            self.gamma = numpy.zeros(2, dtype=numpy.int32)
        else:
            self.gamma = numpy.array(kwargs.get('gamma'), dtype=numpy.int32)
            assert self.gamma.shape == (2, )

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
        if self.point != other.point:
            return False
        if all(self.gamma != other.gamma):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def point(self):
        """Message field 'point'."""
        return self._point

    @point.setter
    def point(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'point' field must be a sub message of type 'Point'"
        self._point = value

    @property
    def gamma(self):
        """Message field 'gamma'."""
        return self._gamma

    @gamma.setter
    def gamma(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.int32, \
                "The 'gamma' numpy.ndarray() must have the dtype of 'numpy.int32'"
            assert value.size == 2, \
                "The 'gamma' numpy.ndarray() must have a size of 2"
            self._gamma = value
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
                 len(value) == 2 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'gamma' field must be a set or sequence with length 2 and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._gamma = numpy.array(value, dtype=numpy.int32)


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_SolveIK_Response(type):
    """Metaclass of message 'SolveIK_Response'."""

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
            module = import_type_support('robot_23_kinematics_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'robot_23_kinematics_interfaces.srv.SolveIK_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__solve_ik__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__solve_ik__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__solve_ik__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__solve_ik__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__solve_ik__response

            from sensor_msgs.msg import JointState
            if JointState.__class__._TYPE_SUPPORT is None:
                JointState.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SolveIK_Response(metaclass=Metaclass_SolveIK_Response):
    """Message class 'SolveIK_Response'."""

    __slots__ = [
        '_q',
        '_flag',
    ]

    _fields_and_field_types = {
        'q': 'sensor_msgs/JointState',
        'flag': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'JointState'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from sensor_msgs.msg import JointState
        self.q = kwargs.get('q', JointState())
        self.flag = kwargs.get('flag', bool())

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
        if self.q != other.q:
            return False
        if self.flag != other.flag:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def q(self):
        """Message field 'q'."""
        return self._q

    @q.setter
    def q(self, value):
        if __debug__:
            from sensor_msgs.msg import JointState
            assert \
                isinstance(value, JointState), \
                "The 'q' field must be a sub message of type 'JointState'"
        self._q = value

    @property
    def flag(self):
        """Message field 'flag'."""
        return self._flag

    @flag.setter
    def flag(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'flag' field must be of type 'bool'"
        self._flag = value


class Metaclass_SolveIK(type):
    """Metaclass of service 'SolveIK'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('robot_23_kinematics_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'robot_23_kinematics_interfaces.srv.SolveIK')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__solve_ik

            from robot_23_kinematics_interfaces.srv import _solve_ik
            if _solve_ik.Metaclass_SolveIK_Request._TYPE_SUPPORT is None:
                _solve_ik.Metaclass_SolveIK_Request.__import_type_support__()
            if _solve_ik.Metaclass_SolveIK_Response._TYPE_SUPPORT is None:
                _solve_ik.Metaclass_SolveIK_Response.__import_type_support__()


class SolveIK(metaclass=Metaclass_SolveIK):
    from robot_23_kinematics_interfaces.srv._solve_ik import SolveIK_Request as Request
    from robot_23_kinematics_interfaces.srv._solve_ik import SolveIK_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
