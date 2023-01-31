// Generated by gencpp from file kortex_driver/RampResponse.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_RAMPRESPONSE_H
#define KORTEX_DRIVER_MESSAGE_RAMPRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace kortex_driver
{
template <class ContainerAllocator>
struct RampResponse_
{
  typedef RampResponse_<ContainerAllocator> Type;

  RampResponse_()
    : loop_selection(0)
    , slope(0.0)
    , ramp_delay(0.0)
    , duration(0.0)  {
    }
  RampResponse_(const ContainerAllocator& _alloc)
    : loop_selection(0)
    , slope(0.0)
    , ramp_delay(0.0)
    , duration(0.0)  {
  (void)_alloc;
    }



   typedef uint32_t _loop_selection_type;
  _loop_selection_type loop_selection;

   typedef float _slope_type;
  _slope_type slope;

   typedef float _ramp_delay_type;
  _ramp_delay_type ramp_delay;

   typedef float _duration_type;
  _duration_type duration;





  typedef boost::shared_ptr< ::kortex_driver::RampResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::RampResponse_<ContainerAllocator> const> ConstPtr;

}; // struct RampResponse_

typedef ::kortex_driver::RampResponse_<std::allocator<void> > RampResponse;

typedef boost::shared_ptr< ::kortex_driver::RampResponse > RampResponsePtr;
typedef boost::shared_ptr< ::kortex_driver::RampResponse const> RampResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::RampResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::RampResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::RampResponse_<ContainerAllocator1> & lhs, const ::kortex_driver::RampResponse_<ContainerAllocator2> & rhs)
{
  return lhs.loop_selection == rhs.loop_selection &&
    lhs.slope == rhs.slope &&
    lhs.ramp_delay == rhs.ramp_delay &&
    lhs.duration == rhs.duration;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::RampResponse_<ContainerAllocator1> & lhs, const ::kortex_driver::RampResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::RampResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::RampResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::RampResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::RampResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::RampResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::RampResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::RampResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9e3f4edf9087b42bf3e2e7ff4ca2b2f9";
  }

  static const char* value(const ::kortex_driver::RampResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9e3f4edf9087b42bULL;
  static const uint64_t static_value2 = 0xf3e2e7ff4ca2b2f9ULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::RampResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/RampResponse";
  }

  static const char* value(const ::kortex_driver::RampResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::RampResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"uint32 loop_selection\n"
"float32 slope\n"
"float32 ramp_delay\n"
"float32 duration\n"
;
  }

  static const char* value(const ::kortex_driver::RampResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::RampResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.loop_selection);
      stream.next(m.slope);
      stream.next(m.ramp_delay);
      stream.next(m.duration);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RampResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::RampResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::RampResponse_<ContainerAllocator>& v)
  {
    s << indent << "loop_selection: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.loop_selection);
    s << indent << "slope: ";
    Printer<float>::stream(s, indent + "  ", v.slope);
    s << indent << "ramp_delay: ";
    Printer<float>::stream(s, indent + "  ", v.ramp_delay);
    s << indent << "duration: ";
    Printer<float>::stream(s, indent + "  ", v.duration);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_RAMPRESPONSE_H