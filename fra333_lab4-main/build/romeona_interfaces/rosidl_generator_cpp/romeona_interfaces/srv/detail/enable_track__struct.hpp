// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from romeona_interfaces:srv/EnableTrack.idl
// generated code does not contain a copyright notice

#ifndef ROMEONA_INTERFACES__SRV__DETAIL__ENABLE_TRACK__STRUCT_HPP_
#define ROMEONA_INTERFACES__SRV__DETAIL__ENABLE_TRACK__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 's'
#include "std_msgs/msg/detail/bool__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__romeona_interfaces__srv__EnableTrack_Request __attribute__((deprecated))
#else
# define DEPRECATED__romeona_interfaces__srv__EnableTrack_Request __declspec(deprecated)
#endif

namespace romeona_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct EnableTrack_Request_
{
  using Type = EnableTrack_Request_<ContainerAllocator>;

  explicit EnableTrack_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : s(_init)
  {
    (void)_init;
  }

  explicit EnableTrack_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : s(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _s_type =
    std_msgs::msg::Bool_<ContainerAllocator>;
  _s_type s;

  // setters for named parameter idiom
  Type & set__s(
    const std_msgs::msg::Bool_<ContainerAllocator> & _arg)
  {
    this->s = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    romeona_interfaces::srv::EnableTrack_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const romeona_interfaces::srv::EnableTrack_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<romeona_interfaces::srv::EnableTrack_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<romeona_interfaces::srv::EnableTrack_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      romeona_interfaces::srv::EnableTrack_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<romeona_interfaces::srv::EnableTrack_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      romeona_interfaces::srv::EnableTrack_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<romeona_interfaces::srv::EnableTrack_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<romeona_interfaces::srv::EnableTrack_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<romeona_interfaces::srv::EnableTrack_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__romeona_interfaces__srv__EnableTrack_Request
    std::shared_ptr<romeona_interfaces::srv::EnableTrack_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__romeona_interfaces__srv__EnableTrack_Request
    std::shared_ptr<romeona_interfaces::srv::EnableTrack_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EnableTrack_Request_ & other) const
  {
    if (this->s != other.s) {
      return false;
    }
    return true;
  }
  bool operator!=(const EnableTrack_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EnableTrack_Request_

// alias to use template instance with default allocator
using EnableTrack_Request =
  romeona_interfaces::srv::EnableTrack_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace romeona_interfaces


#ifndef _WIN32
# define DEPRECATED__romeona_interfaces__srv__EnableTrack_Response __attribute__((deprecated))
#else
# define DEPRECATED__romeona_interfaces__srv__EnableTrack_Response __declspec(deprecated)
#endif

namespace romeona_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct EnableTrack_Response_
{
  using Type = EnableTrack_Response_<ContainerAllocator>;

  explicit EnableTrack_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit EnableTrack_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    romeona_interfaces::srv::EnableTrack_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const romeona_interfaces::srv::EnableTrack_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<romeona_interfaces::srv::EnableTrack_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<romeona_interfaces::srv::EnableTrack_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      romeona_interfaces::srv::EnableTrack_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<romeona_interfaces::srv::EnableTrack_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      romeona_interfaces::srv::EnableTrack_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<romeona_interfaces::srv::EnableTrack_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<romeona_interfaces::srv::EnableTrack_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<romeona_interfaces::srv::EnableTrack_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__romeona_interfaces__srv__EnableTrack_Response
    std::shared_ptr<romeona_interfaces::srv::EnableTrack_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__romeona_interfaces__srv__EnableTrack_Response
    std::shared_ptr<romeona_interfaces::srv::EnableTrack_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EnableTrack_Response_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const EnableTrack_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EnableTrack_Response_

// alias to use template instance with default allocator
using EnableTrack_Response =
  romeona_interfaces::srv::EnableTrack_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace romeona_interfaces

namespace romeona_interfaces
{

namespace srv
{

struct EnableTrack
{
  using Request = romeona_interfaces::srv::EnableTrack_Request;
  using Response = romeona_interfaces::srv::EnableTrack_Response;
};

}  // namespace srv

}  // namespace romeona_interfaces

#endif  // ROMEONA_INTERFACES__SRV__DETAIL__ENABLE_TRACK__STRUCT_HPP_
