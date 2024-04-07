// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from stingray_msg:msg/StingrayControl.idl
// generated code does not contain a copyright notice

#ifndef STINGRAY_MSG__MSG__DETAIL__STINGRAY_CONTROL__TRAITS_HPP_
#define STINGRAY_MSG__MSG__DETAIL__STINGRAY_CONTROL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "stingray_msg/msg/detail/stingray_control__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace stingray_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const StingrayControl & msg,
  std::ostream & out)
{
  out << "{";
  // member: forward_backward
  {
    out << "forward_backward: ";
    rosidl_generator_traits::value_to_yaml(msg.forward_backward, out);
    out << ", ";
  }

  // member: left_right
  {
    out << "left_right: ";
    rosidl_generator_traits::value_to_yaml(msg.left_right, out);
    out << ", ";
  }

  // member: up_down
  {
    out << "up_down: ";
    rosidl_generator_traits::value_to_yaml(msg.up_down, out);
    out << ", ";
  }

  // member: horizontal_rotation
  {
    out << "horizontal_rotation: ";
    rosidl_generator_traits::value_to_yaml(msg.horizontal_rotation, out);
    out << ", ";
  }

  // member: vertical_rotation
  {
    out << "vertical_rotation: ";
    rosidl_generator_traits::value_to_yaml(msg.vertical_rotation, out);
    out << ", ";
  }

  // member: light_toggle
  {
    out << "light_toggle: ";
    rosidl_generator_traits::value_to_yaml(msg.light_toggle, out);
    out << ", ";
  }

  // member: camera_angle
  {
    out << "camera_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.camera_angle, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const StingrayControl & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: forward_backward
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "forward_backward: ";
    rosidl_generator_traits::value_to_yaml(msg.forward_backward, out);
    out << "\n";
  }

  // member: left_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_right: ";
    rosidl_generator_traits::value_to_yaml(msg.left_right, out);
    out << "\n";
  }

  // member: up_down
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "up_down: ";
    rosidl_generator_traits::value_to_yaml(msg.up_down, out);
    out << "\n";
  }

  // member: horizontal_rotation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "horizontal_rotation: ";
    rosidl_generator_traits::value_to_yaml(msg.horizontal_rotation, out);
    out << "\n";
  }

  // member: vertical_rotation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vertical_rotation: ";
    rosidl_generator_traits::value_to_yaml(msg.vertical_rotation, out);
    out << "\n";
  }

  // member: light_toggle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "light_toggle: ";
    rosidl_generator_traits::value_to_yaml(msg.light_toggle, out);
    out << "\n";
  }

  // member: camera_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "camera_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.camera_angle, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StingrayControl & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace stingray_msg

namespace rosidl_generator_traits
{

[[deprecated("use stingray_msg::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const stingray_msg::msg::StingrayControl & msg,
  std::ostream & out, size_t indentation = 0)
{
  stingray_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use stingray_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const stingray_msg::msg::StingrayControl & msg)
{
  return stingray_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<stingray_msg::msg::StingrayControl>()
{
  return "stingray_msg::msg::StingrayControl";
}

template<>
inline const char * name<stingray_msg::msg::StingrayControl>()
{
  return "stingray_msg/msg/StingrayControl";
}

template<>
struct has_fixed_size<stingray_msg::msg::StingrayControl>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<stingray_msg::msg::StingrayControl>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<stingray_msg::msg::StingrayControl>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // STINGRAY_MSG__MSG__DETAIL__STINGRAY_CONTROL__TRAITS_HPP_
