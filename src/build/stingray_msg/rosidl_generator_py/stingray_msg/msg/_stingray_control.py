# generated from rosidl_generator_py/resource/_idl.py.em
# with input from stingray_msg:msg/StingrayControl.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_StingrayControl(type):
    """Metaclass of message 'StingrayControl'."""

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
            module = import_type_support('stingray_msg')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'stingray_msg.msg.StingrayControl')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__stingray_control
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__stingray_control
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__stingray_control
            cls._TYPE_SUPPORT = module.type_support_msg__msg__stingray_control
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__stingray_control

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class StingrayControl(metaclass=Metaclass_StingrayControl):
    """Message class 'StingrayControl'."""

    __slots__ = [
        '_forward_backward',
        '_left_right',
        '_up_down',
        '_horizontal_rotation',
        '_vertical_rotation',
        '_light_toggle',
        '_camera_angle',
    ]

    _fields_and_field_types = {
        'forward_backward': 'float',
        'left_right': 'float',
        'up_down': 'float',
        'horizontal_rotation': 'float',
        'vertical_rotation': 'float',
        'light_toggle': 'int8',
        'camera_angle': 'int8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.forward_backward = kwargs.get('forward_backward', float())
        self.left_right = kwargs.get('left_right', float())
        self.up_down = kwargs.get('up_down', float())
        self.horizontal_rotation = kwargs.get('horizontal_rotation', float())
        self.vertical_rotation = kwargs.get('vertical_rotation', float())
        self.light_toggle = kwargs.get('light_toggle', int())
        self.camera_angle = kwargs.get('camera_angle', int())

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
        if self.forward_backward != other.forward_backward:
            return False
        if self.left_right != other.left_right:
            return False
        if self.up_down != other.up_down:
            return False
        if self.horizontal_rotation != other.horizontal_rotation:
            return False
        if self.vertical_rotation != other.vertical_rotation:
            return False
        if self.light_toggle != other.light_toggle:
            return False
        if self.camera_angle != other.camera_angle:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def forward_backward(self):
        """Message field 'forward_backward'."""
        return self._forward_backward

    @forward_backward.setter
    def forward_backward(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'forward_backward' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'forward_backward' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._forward_backward = value

    @builtins.property
    def left_right(self):
        """Message field 'left_right'."""
        return self._left_right

    @left_right.setter
    def left_right(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'left_right' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'left_right' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._left_right = value

    @builtins.property
    def up_down(self):
        """Message field 'up_down'."""
        return self._up_down

    @up_down.setter
    def up_down(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'up_down' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'up_down' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._up_down = value

    @builtins.property
    def horizontal_rotation(self):
        """Message field 'horizontal_rotation'."""
        return self._horizontal_rotation

    @horizontal_rotation.setter
    def horizontal_rotation(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'horizontal_rotation' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'horizontal_rotation' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._horizontal_rotation = value

    @builtins.property
    def vertical_rotation(self):
        """Message field 'vertical_rotation'."""
        return self._vertical_rotation

    @vertical_rotation.setter
    def vertical_rotation(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vertical_rotation' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'vertical_rotation' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._vertical_rotation = value

    @builtins.property
    def light_toggle(self):
        """Message field 'light_toggle'."""
        return self._light_toggle

    @light_toggle.setter
    def light_toggle(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'light_toggle' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'light_toggle' field must be an integer in [-128, 127]"
        self._light_toggle = value

    @builtins.property
    def camera_angle(self):
        """Message field 'camera_angle'."""
        return self._camera_angle

    @camera_angle.setter
    def camera_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'camera_angle' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'camera_angle' field must be an integer in [-128, 127]"
        self._camera_angle = value
