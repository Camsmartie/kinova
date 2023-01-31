// Generated by gencpp from file kortex_driver/SetJointSpeedSoftLimitsRequest.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_SETJOINTSPEEDSOFTLIMITSREQUEST_H
#define KORTEX_DRIVER_MESSAGE_SETJOINTSPEEDSOFTLIMITSREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/JointSpeedSoftLimits.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct SetJointSpeedSoftLimitsRequest_
{
  typedef SetJointSpeedSoftLimitsRequest_<ContainerAllocator> Type;

  SetJointSpeedSoftLimitsRequest_()
    : input()  {
    }
  SetJointSpeedSoftLimitsRequest_(const ContainerAllocator& _alloc)
    : input(_alloc)  {
  (void)_alloc;
    }



   typedef  ::kortex_driver::JointSpeedSoftLimits_<ContainerAllocator>  _input_type;
  _input_type input;





  typedef boost::shared_ptr< ::kortex_driver::SetJointSpeedSoftLimitsRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::SetJointSpeedSoftLimitsRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetJointSpeedSoftLimitsRequest_

typedef ::kortex_driver::SetJointSpeedSoftLimitsRequest_<std::allocator<void> > SetJointSpeedSoftLimitsRequest;

typedef boost::shared_ptr< ::kortex_driver::SetJointSpeedSoftLimitsRequest > SetJointSpeedSoftLimitsRequestPtr;
typedef boost::shared_ptr< ::kortex_driver::SetJointSpeedSoftLimitsRequest const> SetJointSpeedSoftLimitsRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::SetJointSpeedSoftLimitsRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::SetJointSpeedSoftLimitsRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::SetJointSpeedSoftLimitsRequest_<ContainerAllocator1> & lhs, const ::kortex_driver::SetJointSpeedSoftLimitsRequest_<ContainerAllocator2> & rhs)
{
  return lhs.input == rhs.input;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::SetJointSpeedSoftLimitsRequest_<ContainerAllocator1> & lhs, const ::kortex_driver::SetJointSpeedSoftLimitsRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::SetJointSpeedSoftLimitsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::SetJointSpeedSoftLimitsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::SetJointSpeedSoftLimitsRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::SetJointSpeedSoftLimitsRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::SetJointSpeedSoftLimitsRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::SetJointSpeedSoftLimitsRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::SetJointSpeedSoftLimitsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "830ffce6732ff2d0ba66feefa07cfd66";
  }

  static const char* value(const ::kortex_driver::SetJointSpeedSoftLimitsRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x830ffce6732ff2d0ULL;
  static const uint64_t static_value2 = 0xba66feefa07cfd66ULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::SetJointSpeedSoftLimitsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/SetJointSpeedSoftLimitsRequest";
  }

  static const char* value(const ::kortex_driver::SetJointSpeedSoftLimitsRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::SetJointSpeedSoftLimitsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "JointSpeedSoftLimits input\n"
"\n"
"================================================================================\n"
"MSG: kortex_driver/JointSpeedSoftLimits\n"
"\n"
"uint32 control_mode\n"
"float32[] joint_speed_soft_limits\n"
;
  }

  static const char* value(const ::kortex_driver::SetJointSpeedSoftLimitsRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::SetJointSpeedSoftLimitsRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.input);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetJointSpeedSoftLimitsRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::SetJointSpeedSoftLimitsRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::SetJointSpeedSoftLimitsRequest_<ContainerAllocator>& v)
  {
    s << indent << "input: ";
    s << std::endl;
    Printer< ::kortex_driver::JointSpeedSoftLimits_<ContainerAllocator> >::stream(s, indent + "  ", v.input);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_SETJOINTSPEEDSOFTLIMITSREQUEST_H