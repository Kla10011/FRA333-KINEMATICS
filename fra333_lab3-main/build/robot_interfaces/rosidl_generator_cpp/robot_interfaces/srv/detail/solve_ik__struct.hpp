// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robot_interfaces:srv/SolveIK.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__SRV__DETAIL__SOLVE_IK__STRUCT_HPP_
#define ROBOT_INTERFACES__SRV__DETAIL__SOLVE_IK__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'point'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robot_interfaces__srv__SolveIK_Request __attribute__((deprecated))
#else
# define DEPRECATED__robot_interfaces__srv__SolveIK_Request __declspec(deprecated)
#endif

namespace robot_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SolveIK_Request_
{
  using Type = SolveIK_Request_<ContainerAllocator>;

  explicit SolveIK_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : point(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<int32_t, 2>::iterator, int32_t>(this->gamma.begin(), this->gamma.end(), 0l);
    }
  }

  explicit SolveIK_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : point(_alloc, _init),
    gamma(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<int32_t, 2>::iterator, int32_t>(this->gamma.begin(), this->gamma.end(), 0l);
    }
  }

  // field types and members
  using _point_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _point_type point;
  using _gamma_type =
    std::array<int32_t, 2>;
  _gamma_type gamma;

  // setters for named parameter idiom
  Type & set__point(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->point = _arg;
    return *this;
  }
  Type & set__gamma(
    const std::array<int32_t, 2> & _arg)
  {
    this->gamma = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robot_interfaces::srv::SolveIK_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_interfaces::srv::SolveIK_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_interfaces::srv::SolveIK_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_interfaces::srv::SolveIK_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_interfaces::srv::SolveIK_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_interfaces::srv::SolveIK_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_interfaces::srv::SolveIK_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_interfaces::srv::SolveIK_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_interfaces::srv::SolveIK_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_interfaces::srv::SolveIK_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_interfaces__srv__SolveIK_Request
    std::shared_ptr<robot_interfaces::srv::SolveIK_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_interfaces__srv__SolveIK_Request
    std::shared_ptr<robot_interfaces::srv::SolveIK_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SolveIK_Request_ & other) const
  {
    if (this->point != other.point) {
      return false;
    }
    if (this->gamma != other.gamma) {
      return false;
    }
    return true;
  }
  bool operator!=(const SolveIK_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SolveIK_Request_

// alias to use template instance with default allocator
using SolveIK_Request =
  robot_interfaces::srv::SolveIK_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace robot_interfaces


// Include directives for member types
// Member 'q'
#include "sensor_msgs/msg/detail/joint_state__struct.hpp"
// Member 'flag'
#include "std_msgs/msg/detail/bool__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robot_interfaces__srv__SolveIK_Response __attribute__((deprecated))
#else
# define DEPRECATED__robot_interfaces__srv__SolveIK_Response __declspec(deprecated)
#endif

namespace robot_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SolveIK_Response_
{
  using Type = SolveIK_Response_<ContainerAllocator>;

  explicit SolveIK_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : q(_init),
    flag(_init)
  {
    (void)_init;
  }

  explicit SolveIK_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : q(_alloc, _init),
    flag(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _q_type =
    sensor_msgs::msg::JointState_<ContainerAllocator>;
  _q_type q;
  using _flag_type =
    std_msgs::msg::Bool_<ContainerAllocator>;
  _flag_type flag;

  // setters for named parameter idiom
  Type & set__q(
    const sensor_msgs::msg::JointState_<ContainerAllocator> & _arg)
  {
    this->q = _arg;
    return *this;
  }
  Type & set__flag(
    const std_msgs::msg::Bool_<ContainerAllocator> & _arg)
  {
    this->flag = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robot_interfaces::srv::SolveIK_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_interfaces::srv::SolveIK_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_interfaces::srv::SolveIK_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_interfaces::srv::SolveIK_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_interfaces::srv::SolveIK_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_interfaces::srv::SolveIK_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_interfaces::srv::SolveIK_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_interfaces::srv::SolveIK_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_interfaces::srv::SolveIK_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_interfaces::srv::SolveIK_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_interfaces__srv__SolveIK_Response
    std::shared_ptr<robot_interfaces::srv::SolveIK_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_interfaces__srv__SolveIK_Response
    std::shared_ptr<robot_interfaces::srv::SolveIK_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SolveIK_Response_ & other) const
  {
    if (this->q != other.q) {
      return false;
    }
    if (this->flag != other.flag) {
      return false;
    }
    return true;
  }
  bool operator!=(const SolveIK_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SolveIK_Response_

// alias to use template instance with default allocator
using SolveIK_Response =
  robot_interfaces::srv::SolveIK_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace robot_interfaces

namespace robot_interfaces
{

namespace srv
{

struct SolveIK
{
  using Request = robot_interfaces::srv::SolveIK_Request;
  using Response = robot_interfaces::srv::SolveIK_Response;
};

}  // namespace srv

}  // namespace robot_interfaces

#endif  // ROBOT_INTERFACES__SRV__DETAIL__SOLVE_IK__STRUCT_HPP_
