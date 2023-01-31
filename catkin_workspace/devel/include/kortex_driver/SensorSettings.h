// Generated by gencpp from file kortex_driver/SensorSettings.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_SENSORSETTINGS_H
#define KORTEX_DRIVER_MESSAGE_SENSORSETTINGS_H


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
struct SensorSettings_
{
  typedef SensorSettings_<ContainerAllocator> Type;

  SensorSettings_()
    : sensor(0)
    , resolution(0)
    , frame_rate(0)
    , bit_rate(0)  {
    }
  SensorSettings_(const ContainerAllocator& _alloc)
    : sensor(0)
    , resolution(0)
    , frame_rate(0)
    , bit_rate(0)  {
  (void)_alloc;
    }



   typedef uint32_t _sensor_type;
  _sensor_type sensor;

   typedef uint32_t _resolution_type;
  _resolution_type resolution;

   typedef uint32_t _frame_rate_type;
  _frame_rate_type frame_rate;

   typedef uint32_t _bit_rate_type;
  _bit_rate_type bit_rate;





  typedef boost::shared_ptr< ::kortex_driver::SensorSettings_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::SensorSettings_<ContainerAllocator> const> ConstPtr;

}; // struct SensorSettings_

typedef ::kortex_driver::SensorSettings_<std::allocator<void> > SensorSettings;

typedef boost::shared_ptr< ::kortex_driver::SensorSettings > SensorSettingsPtr;
typedef boost::shared_ptr< ::kortex_driver::SensorSettings const> SensorSettingsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::SensorSettings_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::SensorSettings_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::SensorSettings_<ContainerAllocator1> & lhs, const ::kortex_driver::SensorSettings_<ContainerAllocator2> & rhs)
{
  return lhs.sensor == rhs.sensor &&
    lhs.resolution == rhs.resolution &&
    lhs.frame_rate == rhs.frame_rate &&
    lhs.bit_rate == rhs.bit_rate;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::SensorSettings_<ContainerAllocator1> & lhs, const ::kortex_driver::SensorSettings_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::SensorSettings_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::SensorSettings_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::SensorSettings_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::SensorSettings_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::SensorSettings_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::SensorSettings_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::SensorSettings_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1b1f6cd3d6eb9aa0d6912b66a0f489bd";
  }

  static const char* value(const ::kortex_driver::SensorSettings_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1b1f6cd3d6eb9aa0ULL;
  static const uint64_t static_value2 = 0xd6912b66a0f489bdULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::SensorSettings_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/SensorSettings";
  }

  static const char* value(const ::kortex_driver::SensorSettings_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::SensorSettings_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"uint32 sensor\n"
"uint32 resolution\n"
"uint32 frame_rate\n"
"uint32 bit_rate\n"
;
  }

  static const char* value(const ::kortex_driver::SensorSettings_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::SensorSettings_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.sensor);
      stream.next(m.resolution);
      stream.next(m.frame_rate);
      stream.next(m.bit_rate);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SensorSettings_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::SensorSettings_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::SensorSettings_<ContainerAllocator>& v)
  {
    s << indent << "sensor: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.sensor);
    s << indent << "resolution: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.resolution);
    s << indent << "frame_rate: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.frame_rate);
    s << indent << "bit_rate: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.bit_rate);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_SENSORSETTINGS_H
