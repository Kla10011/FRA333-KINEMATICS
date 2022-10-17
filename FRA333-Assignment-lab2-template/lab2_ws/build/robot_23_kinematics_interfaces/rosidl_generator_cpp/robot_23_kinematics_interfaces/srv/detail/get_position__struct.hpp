// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robot_23_kinematics_interfaces:srv/GetPosition.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_23_KINEMATICS_INTERFACES__SRV__DETAIL__GET_POSITION__STRUCT_HPP_
#define ROBOT_23_KINEMATICS_INTERFACES__SRV__DETAIL__GET_POSITION__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'joints'
#include "sensor_msgs/msg/detail/joint_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robot_23_kinematics_interfaces__srv__GetPosition_Request __attribute__((deprecated))
#else
# define DEPRECATED__robot_23_kinematics_interfaces__srv__GetPosition_Request __declspec(deprecated)
#endif

namespace robot_23_kinematics_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetPosition_Request_
{
  using Type = GetPosition_Request_<ContainerAllocator>;

  explicit GetPosition_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : joints(_init)
  {
    (void)_init;
  }

  explicit GetPosition_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : joints(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _joints_type =
    sensor_msgs::msg::JointState_<ContainerAllocator>;
  _joints_type joints;

  // setters for named parameter idiom
  Type & set__joints(
    const sensor_msgs::msg::JointState_<ContainerAllocator> & _arg)
  {
    this->joints = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robot_23_kinematics_interfaces::srv::GetPosition_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_23_kinematics_interfaces::srv::GetPosition_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_23_kinematics_interfaces::srv::GetPosition_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_23_kinematics_interfaces::srv::GetPosition_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_23_kinematics_interfaces::srv::GetPosition_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_23_kinematics_interfaces::srv::GetPosition_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_23_kinematics_interfaces::srv::GetPosition_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_23_kinematics_interfaces::srv::GetPosition_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_23_kinematics_interfaces::srv::GetPosition_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_23_kinematics_interfaces::srv::GetPosition_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_23_kinematics_interfaces__srv__GetPosition_Request
    std::shared_ptr<robot_23_kinematics_interfaces::srv::GetPosition_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_23_kinematics_interfaces__srv__GetPosition_Request
    std::shared_ptr<robot_23_kinematics_interfaces::srv::GetPosition_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetPosition_Request_ & other) const
  {
    if (this->joints != other.joints) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetPosition_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetPosition_Request_

// alias to use template instance with default allocator
using GetPosition_Request =
  robot_23_kinematics_interfaces::srv::GetPosition_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace robot_23_kinematics_interfaces


// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robot_23_kinematics_interfaces__srv__GetPosition_Response __attribute__((deprecated))
#else
# define DEPRECATED__robot_23_kinematics_interfaces__srv__GetPosition_Response __declspec(deprecated)
#endif

namespace robot_23_kinematics_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetPosition_Response_
{
  using Type = GetPosition_Response_<ContainerAllocator>;

  explicit GetPosition_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_init)
  {
    (void)_init;
  }

  explicit GetPosition_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _position_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _position_type position;

  // setters for named parameter idiom
  Type & set__position(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robot_23_kinematics_interfaces::srv::GetPosition_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_23_kinematics_interfaces::srv::GetPosition_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_23_kinematics_interfaces::srv::GetPosition_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_23_kinematics_interfaces::srv::GetPosition_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_23_kinematics_interfaces::srv::GetPosition_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_23_kinematics_interfaces::srv::GetPosition_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_23_kinematics_interfaces::srv::GetPosition_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_23_kinematics_interfaces::srv::GetPosition_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_23_kinematics_interfaces::srv::GetPosition_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_23_kinematics_interfaces::srv::GetPosition_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_23_kinematics_interfaces__srv__GetPosition_Response
    std::shared_ptr<robot_23_kinematics_interfaces::srv::GetPosition_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_23_kinematics_interfaces__srv__GetPosition_Response
    std::shared_ptr<robot_23_kinematics_interfaces::srv::GetPosition_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetPosition_Response_ & other) const
  {
    if (this->position != other.position) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetPosition_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetPosition_Response_

// alias to use template instance with default allocator
using GetPosition_Response =
  robot_23_kinematics_interfaces::srv::GetPosition_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace robot_23_kinematics_interfaces

namespace robot_23_kinematics_interfaces
{

namespace srv
{

struct GetPosition
{
  using Request = robot_23_kinematics_interfaces::srv::GetPosition_Request;
  using Response = robot_23_kinematics_interfaces::srv::GetPosition_Response;
};

}  // namespace srv

}  // namespace robot_23_kinematics_interfaces

#endif  // ROBOT_23_KINEMATICS_INTERFACES__SRV__DETAIL__GET_POSITION__STRUCT_HPP_
