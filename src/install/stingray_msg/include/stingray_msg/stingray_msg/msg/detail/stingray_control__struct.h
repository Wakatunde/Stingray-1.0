// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from stingray_msg:msg/StingrayControl.idl
// generated code does not contain a copyright notice

#ifndef STINGRAY_MSG__MSG__DETAIL__STINGRAY_CONTROL__STRUCT_H_
#define STINGRAY_MSG__MSG__DETAIL__STINGRAY_CONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/StingrayControl in the package stingray_msg.
/**
  * StingrayControl.msg
 */
typedef struct stingray_msg__msg__StingrayControl
{
  /// Forward/backward motion (Left stick up/down)
  float forward_backward;
  /// Left/right strafing (Left stick left/right)
  float left_right;
  /// Up/down motion (Triggers)
  float up_down;
  /// Horizontal rotation (Right stick left/right)
  float horizontal_rotation;
  /// Vertical rotation (Right stick up/down)
  float vertical_rotation;
  /// Toggle lights (Button)
  int8_t light_toggle;
  /// Adjust camera angle (DPad up/down)
  int8_t camera_angle;
} stingray_msg__msg__StingrayControl;

// Struct for a sequence of stingray_msg__msg__StingrayControl.
typedef struct stingray_msg__msg__StingrayControl__Sequence
{
  stingray_msg__msg__StingrayControl * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} stingray_msg__msg__StingrayControl__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STINGRAY_MSG__MSG__DETAIL__STINGRAY_CONTROL__STRUCT_H_
