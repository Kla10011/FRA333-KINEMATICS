// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from romeona_interfaces:srv/EnableTrack.idl
// generated code does not contain a copyright notice

#ifndef ROMEONA_INTERFACES__SRV__DETAIL__ENABLE_TRACK__BUILDER_HPP_
#define ROMEONA_INTERFACES__SRV__DETAIL__ENABLE_TRACK__BUILDER_HPP_

#include "romeona_interfaces/srv/detail/enable_track__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace romeona_interfaces
{

namespace srv
{

namespace builder
{

class Init_EnableTrack_Request_s
{
public:
  Init_EnableTrack_Request_s()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::romeona_interfaces::srv::EnableTrack_Request s(::romeona_interfaces::srv::EnableTrack_Request::_s_type arg)
  {
    msg_.s = std::move(arg);
    return std::move(msg_);
  }

private:
  ::romeona_interfaces::srv::EnableTrack_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::romeona_interfaces::srv::EnableTrack_Request>()
{
  return romeona_interfaces::srv::builder::Init_EnableTrack_Request_s();
}

}  // namespace romeona_interfaces


namespace romeona_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::romeona_interfaces::srv::EnableTrack_Response>()
{
  return ::romeona_interfaces::srv::EnableTrack_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace romeona_interfaces

#endif  // ROMEONA_INTERFACES__SRV__DETAIL__ENABLE_TRACK__BUILDER_HPP_
