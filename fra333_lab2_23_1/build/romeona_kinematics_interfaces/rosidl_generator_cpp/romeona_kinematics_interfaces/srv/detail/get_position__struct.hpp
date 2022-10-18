// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from romeona_kinematics_interfaces:srv/GetPosition.idl
// generated code does not contain a copyright notice

#ifndef ROMEONA_KINEMATICS_INTERFACES__SRV__DETAIL__GET_POSITION__STRUCT_HPP_
#define ROMEONA_KINEMATICS_INTERFACES__SRV__DETAIL__GET_POSITION__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'q'
#include "sensor_msgs/msg/detail/joint_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__romeona_kinematics_interfaces__srv__GetPosition_Request __attribute__((deprecated))
#else
# define DEPRECATED__romeona_kinematics_interfaces__srv__GetPosition_Request __declspec(deprecated)
#endif

namespace romeona_kinematics_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetPosition_Request_
{
  using Type = GetPosition_Request_<ContainerAllocator>;

  explicit GetPosition_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : q(_init)
  {
    (void)_init;
  }

  explicit GetPosition_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : q(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _q_type =
    sensor_msgs::msg::JointState_<ContainerAllocator>;
  _q_type q;

  // setters for named parameter idiom
  Type & set__q(
    const sensor_msgs::msg::JointState_<ContainerAllocator> & _arg)
  {
    this->q = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    romeona_kinematics_interfaces::srv::GetPosition_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const romeona_kinematics_interfaces::srv::GetPosition_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<romeona_kinematics_interfaces::srv::GetPosition_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<romeona_kinematics_interfaces::srv::GetPosition_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      romeona_kinematics_interfaces::srv::GetPosition_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<romeona_kinematics_interfaces::srv::GetPosition_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      romeona_kinematics_interfaces::srv::GetPosition_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<romeona_kinematics_interfaces::srv::GetPosition_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<romeona_kinematics_interfaces::srv::GetPosition_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<romeona_kinematics_interfaces::srv::GetPosition_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__romeona_kinematics_interfaces__srv__GetPosition_Request
    std::shared_ptr<romeona_kinematics_interfaces::srv::GetPosition_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__romeona_kinematics_interfaces__srv__GetPosition_Request
    std::shared_ptr<romeona_kinematics_interfaces::srv::GetPosition_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetPosition_Request_ & other) const
  {
    if (this->q != other.q) {
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
  romeona_kinematics_interfaces::srv::GetPosition_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace romeona_kinematics_interfaces


// Include directives for member types
// Member 'p'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__romeona_kinematics_interfaces__srv__GetPosition_Response __attribute__((deprecated))
#else
# define DEPRECATED__romeona_kinematics_interfaces__srv__GetPosition_Response __declspec(deprecated)
#endif

namespace romeona_kinematics_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetPosition_Response_
{
  using Type = GetPosition_Response_<ContainerAllocator>;

  explicit GetPosition_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : p(_init)
  {
    (void)_init;
  }

  explicit GetPosition_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : p(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _p_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _p_type p;

  // setters for named parameter idiom
  Type & set__p(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->p = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    romeona_kinematics_interfaces::srv::GetPosition_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const romeona_kinematics_interfaces::srv::GetPosition_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<romeona_kinematics_interfaces::srv::GetPosition_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<romeona_kinematics_interfaces::srv::GetPosition_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      romeona_kinematics_interfaces::srv::GetPosition_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<romeona_kinematics_interfaces::srv::GetPosition_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      romeona_kinematics_interfaces::srv::GetPosition_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<romeona_kinematics_interfaces::srv::GetPosition_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<romeona_kinematics_interfaces::srv::GetPosition_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<romeona_kinematics_interfaces::srv::GetPosition_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__romeona_kinematics_interfaces__srv__GetPosition_Response
    std::shared_ptr<romeona_kinematics_interfaces::srv::GetPosition_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__romeona_kinematics_interfaces__srv__GetPosition_Response
    std::shared_ptr<romeona_kinematics_interfaces::srv::GetPosition_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetPosition_Response_ & other) const
  {
    if (this->p != other.p) {
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
  romeona_kinematics_interfaces::srv::GetPosition_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace romeona_kinematics_interfaces

namespace romeona_kinematics_interfaces
{

namespace srv
{

struct GetPosition
{
  using Request = romeona_kinematics_interfaces::srv::GetPosition_Request;
  using Response = romeona_kinematics_interfaces::srv::GetPosition_Response;
};

}  // namespace srv

}  // namespace romeona_kinematics_interfaces

#endif  // ROMEONA_KINEMATICS_INTERFACES__SRV__DETAIL__GET_POSITION__STRUCT_HPP_
