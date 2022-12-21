# generated from rosidl_generator_py/resource/_idl.py.em
# with input from romeona_interfaces:srv/EnableTrack.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_EnableTrack_Request(type):
    """Metaclass of message 'EnableTrack_Request'."""

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
            module = import_type_support('romeona_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'romeona_interfaces.srv.EnableTrack_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__enable_track__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__enable_track__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__enable_track__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__enable_track__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__enable_track__request

            from std_msgs.msg import Bool
            if Bool.__class__._TYPE_SUPPORT is None:
                Bool.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class EnableTrack_Request(metaclass=Metaclass_EnableTrack_Request):
    """Message class 'EnableTrack_Request'."""

    __slots__ = [
        '_s',
    ]

    _fields_and_field_types = {
        's': 'std_msgs/Bool',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Bool'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Bool
        self.s = kwargs.get('s', Bool())

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
        if self.s != other.s:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def s(self):
        """Message field 's'."""
        return self._s

    @s.setter
    def s(self, value):
        if __debug__:
            from std_msgs.msg import Bool
            assert \
                isinstance(value, Bool), \
                "The 's' field must be a sub message of type 'Bool'"
        self._s = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_EnableTrack_Response(type):
    """Metaclass of message 'EnableTrack_Response'."""

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
            module = import_type_support('romeona_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'romeona_interfaces.srv.EnableTrack_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__enable_track__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__enable_track__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__enable_track__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__enable_track__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__enable_track__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class EnableTrack_Response(metaclass=Metaclass_EnableTrack_Response):
    """Message class 'EnableTrack_Response'."""

    __slots__ = [
    ]

    _fields_and_field_types = {
    }

    SLOT_TYPES = (
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))

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
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)


class Metaclass_EnableTrack(type):
    """Metaclass of service 'EnableTrack'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('romeona_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'romeona_interfaces.srv.EnableTrack')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__enable_track

            from romeona_interfaces.srv import _enable_track
            if _enable_track.Metaclass_EnableTrack_Request._TYPE_SUPPORT is None:
                _enable_track.Metaclass_EnableTrack_Request.__import_type_support__()
            if _enable_track.Metaclass_EnableTrack_Response._TYPE_SUPPORT is None:
                _enable_track.Metaclass_EnableTrack_Response.__import_type_support__()


class EnableTrack(metaclass=Metaclass_EnableTrack):
    from romeona_interfaces.srv._enable_track import EnableTrack_Request as Request
    from romeona_interfaces.srv._enable_track import EnableTrack_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
