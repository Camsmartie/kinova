// Generated by gencpp from file kortex_driver/SetDesiredJointSpeedsRequest.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_SETDESIREDJOINTSPEEDSREQUEST_H
#define KORTEX_DRIVER_MESSAGE_SETDESIREDJOINTSPEEDSREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/ControlConfig_JointSpeeds.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct SetDesiredJointSpeedsRequest_
{
  typedef SetDesiredJointSpeedsRequest_<ContainerAllocator> Type;

  SetDesiredJointSpeedsRequest_()
    : input()  {
    }
  SetDesiredJointSpeedsRequest_(const ContainerAllocator& _alloc)
    : input(_alloc)  {
  (void)_alloc;
    }



   typedef  ::kortex_driver::ControlConfig_JointSpeeds_<ContainerAllocator>  _input_type;
  _input_type input;





  typedef boost::shared_ptr< ::kortex_driver::SetDesiredJointSpeedsRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::SetDesiredJointSpeedsRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetDesiredJointSpeedsRequest_

typedef ::kortex_driver::SetDesiredJointSpeedsRequest_<std::allocator<void> > SetDesiredJointSpeedsRequest;

typedef boost::shared_ptr< ::kortex_driver::SetDesiredJointSpeedsRequest > SetDesiredJointSpeedsRequestPtr;
typedef boost::shared_ptr< ::kortex_driver::SetDesiredJointSpeedsRequest const> SetDesiredJointSpeedsRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::SetDesiredJointSpeedsRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::SetDesiredJointSpeedsRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::SetDesiredJointSpeedsRequest_<ContainerAllocator1> & lhs, const ::kortex_driver::SetDesiredJointSpeedsRequest_<ContainerAllocator2> & rhs)
{
  return lhs.input == rhs.input;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::SetDesiredJointSpeedsRequest_<ContainerAllocator1> & lhs, const ::kortex_driver::SetDesiredJointSpeedsRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::SetDesiredJointSpeedsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::SetDesiredJointSpeedsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::SetDesiredJointSpeedsRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::SetDesiredJointSpeedsRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::SetDesiredJointSpeedsRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::SetDesiredJointSpeedsRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::SetDesiredJointSpeedsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "818ed98df91d7c2f80e41de1e13f713c";
  }

  static const char* value(const ::kortex_driver::SetDesiredJointSpeedsRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x818ed98df91d7c2fULL;
  static const uint64_t static_value2 = 0x80e41de1e13f713cULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::SetDesiredJointSpeedsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/SetDesiredJointSpeedsRequest";
  }

  static const char* value(const ::kortex_driver::SetDesiredJointSpeedsRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::SetDesiredJointSpeedsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ControlConfig_JointSpeeds input\n"
"\n"
"================================================================================\n"
"MSG: kortex_driver/ControlConfig_JointSpeeds\n"
"\n"
"float32[] joint_speed\n"
;
  }

  static const char* value(const ::kortex_driver::SetDesiredJointSpeedsRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::SetDesiredJointSpeedsRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.input);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetDesiredJointSpeedsRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::SetDesiredJointSpeedsRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::SetDesiredJointSpeedsRequest_<ContainerAllocator>& v)
  {
    s << indent << "input: ";
    s << std::endl;
    Printer< ::kortex_driver::ControlConfig_JointSpeeds_<ContainerAllocator> >::stream(s, indent + "  ", v.input);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_SETDESIREDJOINTSPEEDSREQUEST_H
