// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from stingray_msg:msg/StingrayControl.idl
// generated code does not contain a copyright notice

#ifndef STINGRAY_MSG__MSG__DETAIL__STINGRAY_CONTROL__BUILDER_HPP_
#define STINGRAY_MSG__MSG__DETAIL__STINGRAY_CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "stingray_msg/msg/detail/stingray_control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace stingray_msg
{

namespace msg
{

namespace builder
{

class Init_StingrayControl_camera_angle
{
public:
  explicit Init_StingrayControl_camera_angle(::stingray_msg::msg::StingrayControl & msg)
  : msg_(msg)
  {}
  ::stingray_msg::msg::StingrayControl camera_angle(::stingray_msg::msg::StingrayControl::_camera_angle_type arg)
  {
    msg_.camera_angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::stingray_msg::msg::StingrayControl msg_;
};

class Init_StingrayControl_light_toggle
{
public:
  explicit Init_StingrayControl_light_toggle(::stingray_msg::msg::StingrayControl & msg)
  : msg_(msg)
  {}
  Init_StingrayControl_camera_angle light_toggle(::stingray_msg::msg::StingrayControl::_light_toggle_type arg)
  {
    msg_.light_toggle = std::move(arg);
    return Init_StingrayControl_camera_angle(msg_);
  }

private:
  ::stingray_msg::msg::StingrayControl msg_;
};

class Init_StingrayControl_vertical_rotation
{
public:
  explicit Init_StingrayControl_vertical_rotation(::stingray_msg::msg::StingrayControl & msg)
  : msg_(msg)
  {}
  Init_StingrayControl_light_toggle vertical_rotation(::stingray_msg::msg::StingrayControl::_vertical_rotation_type arg)
  {
    msg_.vertical_rotation = std::move(arg);
    return Init_StingrayControl_light_toggle(msg_);
  }

private:
  ::stingray_msg::msg::StingrayControl msg_;
};

class Init_StingrayControl_horizontal_rotation
{
public:
  explicit Init_StingrayControl_horizontal_rotation(::stingray_msg::msg::StingrayControl & msg)
  : msg_(msg)
  {}
  Init_StingrayControl_vertical_rotation horizontal_rotation(::stingray_msg::msg::StingrayControl::_horizontal_rotation_type arg)
  {
    msg_.horizontal_rotation = std::move(arg);
    return Init_StingrayControl_vertical_rotation(msg_);
  }

private:
  ::stingray_msg::msg::StingrayControl msg_;
};

class Init_StingrayControl_up_down
{
public:
  explicit Init_StingrayControl_up_down(::stingray_msg::msg::StingrayControl & msg)
  : msg_(msg)
  {}
  Init_StingrayControl_horizontal_rotation up_down(::stingray_msg::msg::StingrayControl::_up_down_type arg)
  {
    msg_.up_down = std::move(arg);
    return Init_StingrayControl_horizontal_rotation(msg_);
  }

private:
  ::stingray_msg::msg::StingrayControl msg_;
};

class Init_StingrayControl_left_right
{
public:
  explicit Init_StingrayControl_left_right(::stingray_msg::msg::StingrayControl & msg)
  : msg_(msg)
  {}
  Init_StingrayControl_up_down left_right(::stingray_msg::msg::StingrayControl::_left_right_type arg)
  {
    msg_.left_right = std::move(arg);
    return Init_StingrayControl_up_down(msg_);
  }

private:
  ::stingray_msg::msg::StingrayControl msg_;
};

class Init_StingrayControl_forward_backward
{
public:
  Init_StingrayControl_forward_backward()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StingrayControl_left_right forward_backward(::stingray_msg::msg::StingrayControl::_forward_backward_type arg)
  {
    msg_.forward_backward = std::move(arg);
    return Init_StingrayControl_left_right(msg_);
  }

private:
  ::stingray_msg::msg::StingrayControl msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::stingray_msg::msg::StingrayControl>()
{
  return stingray_msg::msg::builder::Init_StingrayControl_forward_backward();
}

}  // namespace stingray_msg

#endif  // STINGRAY_MSG__MSG__DETAIL__STINGRAY_CONTROL__BUILDER_HPP_
