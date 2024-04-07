// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from stingray_msg:msg/StingrayControl.idl
// generated code does not contain a copyright notice

#ifndef STINGRAY_MSG__MSG__DETAIL__STINGRAY_CONTROL__STRUCT_HPP_
#define STINGRAY_MSG__MSG__DETAIL__STINGRAY_CONTROL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__stingray_msg__msg__StingrayControl __attribute__((deprecated))
#else
# define DEPRECATED__stingray_msg__msg__StingrayControl __declspec(deprecated)
#endif

namespace stingray_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StingrayControl_
{
  using Type = StingrayControl_<ContainerAllocator>;

  explicit StingrayControl_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->forward_backward = 0.0f;
      this->left_right = 0.0f;
      this->up_down = 0.0f;
      this->horizontal_rotation = 0.0f;
      this->vertical_rotation = 0.0f;
      this->light_toggle = 0;
      this->camera_angle = 0;
    }
  }

  explicit StingrayControl_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->forward_backward = 0.0f;
      this->left_right = 0.0f;
      this->up_down = 0.0f;
      this->horizontal_rotation = 0.0f;
      this->vertical_rotation = 0.0f;
      this->light_toggle = 0;
      this->camera_angle = 0;
    }
  }

  // field types and members
  using _forward_backward_type =
    float;
  _forward_backward_type forward_backward;
  using _left_right_type =
    float;
  _left_right_type left_right;
  using _up_down_type =
    float;
  _up_down_type up_down;
  using _horizontal_rotation_type =
    float;
  _horizontal_rotation_type horizontal_rotation;
  using _vertical_rotation_type =
    float;
  _vertical_rotation_type vertical_rotation;
  using _light_toggle_type =
    int8_t;
  _light_toggle_type light_toggle;
  using _camera_angle_type =
    int8_t;
  _camera_angle_type camera_angle;

  // setters for named parameter idiom
  Type & set__forward_backward(
    const float & _arg)
  {
    this->forward_backward = _arg;
    return *this;
  }
  Type & set__left_right(
    const float & _arg)
  {
    this->left_right = _arg;
    return *this;
  }
  Type & set__up_down(
    const float & _arg)
  {
    this->up_down = _arg;
    return *this;
  }
  Type & set__horizontal_rotation(
    const float & _arg)
  {
    this->horizontal_rotation = _arg;
    return *this;
  }
  Type & set__vertical_rotation(
    const float & _arg)
  {
    this->vertical_rotation = _arg;
    return *this;
  }
  Type & set__light_toggle(
    const int8_t & _arg)
  {
    this->light_toggle = _arg;
    return *this;
  }
  Type & set__camera_angle(
    const int8_t & _arg)
  {
    this->camera_angle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    stingray_msg::msg::StingrayControl_<ContainerAllocator> *;
  using ConstRawPtr =
    const stingray_msg::msg::StingrayControl_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<stingray_msg::msg::StingrayControl_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<stingray_msg::msg::StingrayControl_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      stingray_msg::msg::StingrayControl_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<stingray_msg::msg::StingrayControl_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      stingray_msg::msg::StingrayControl_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<stingray_msg::msg::StingrayControl_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<stingray_msg::msg::StingrayControl_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<stingray_msg::msg::StingrayControl_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__stingray_msg__msg__StingrayControl
    std::shared_ptr<stingray_msg::msg::StingrayControl_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__stingray_msg__msg__StingrayControl
    std::shared_ptr<stingray_msg::msg::StingrayControl_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StingrayControl_ & other) const
  {
    if (this->forward_backward != other.forward_backward) {
      return false;
    }
    if (this->left_right != other.left_right) {
      return false;
    }
    if (this->up_down != other.up_down) {
      return false;
    }
    if (this->horizontal_rotation != other.horizontal_rotation) {
      return false;
    }
    if (this->vertical_rotation != other.vertical_rotation) {
      return false;
    }
    if (this->light_toggle != other.light_toggle) {
      return false;
    }
    if (this->camera_angle != other.camera_angle) {
      return false;
    }
    return true;
  }
  bool operator!=(const StingrayControl_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StingrayControl_

// alias to use template instance with default allocator
using StingrayControl =
  stingray_msg::msg::StingrayControl_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace stingray_msg

#endif  // STINGRAY_MSG__MSG__DETAIL__STINGRAY_CONTROL__STRUCT_HPP_
