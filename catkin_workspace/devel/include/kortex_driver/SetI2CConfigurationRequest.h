// Generated by gencpp from file kortex_driver/SetI2CConfigurationRequest.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_SETI2CCONFIGURATIONREQUEST_H
#define KORTEX_DRIVER_MESSAGE_SETI2CCONFIGURATIONREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/I2CConfiguration.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct SetI2CConfigurationRequest_
{
  typedef SetI2CConfigurationRequest_<ContainerAllocator> Type;

  SetI2CConfigurationRequest_()
    : input()  {
    }
  SetI2CConfigurationRequest_(const ContainerAllocator& _alloc)
    : input(_alloc)  {
  (void)_alloc;
    }



   typedef  ::kortex_driver::I2CConfiguration_<ContainerAllocator>  _input_type;
  _input_type input;





  typedef boost::shared_ptr< ::kortex_driver::SetI2CConfigurationRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::SetI2CConfigurationRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetI2CConfigurationRequest_

typedef ::kortex_driver::SetI2CConfigurationRequest_<std::allocator<void> > SetI2CConfigurationRequest;

typedef boost::shared_ptr< ::kortex_driver::SetI2CConfigurationRequest > SetI2CConfigurationRequestPtr;
typedef boost::shared_ptr< ::kortex_driver::SetI2CConfigurationRequest const> SetI2CConfigurationRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::SetI2CConfigurationRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::SetI2CConfigurationRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::SetI2CConfigurationRequest_<ContainerAllocator1> & lhs, const ::kortex_driver::SetI2CConfigurationRequest_<ContainerAllocator2> & rhs)
{
  return lhs.input == rhs.input;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::SetI2CConfigurationRequest_<ContainerAllocator1> & lhs, const ::kortex_driver::SetI2CConfigurationRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::SetI2CConfigurationRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::SetI2CConfigurationRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::SetI2CConfigurationRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::SetI2CConfigurationRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::SetI2CConfigurationRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::SetI2CConfigurationRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::SetI2CConfigurationRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2c16ffec51babd77f8fe120b196654d9";
  }

  static const char* value(const ::kortex_driver::SetI2CConfigurationRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2c16ffec51babd77ULL;
  static const uint64_t static_value2 = 0xf8fe120b196654d9ULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::SetI2CConfigurationRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/SetI2CConfigurationRequest";
  }

  static const char* value(const ::kortex_driver::SetI2CConfigurationRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::SetI2CConfigurationRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "I2CConfiguration input\n"
"\n"
"================================================================================\n"
"MSG: kortex_driver/I2CConfiguration\n"
"\n"
"uint32 device\n"
"bool enabled\n"
"uint32 mode\n"
"uint32 addressing\n"
;
  }

  static const char* value(const ::kortex_driver::SetI2CConfigurationRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::SetI2CConfigurationRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.input);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetI2CConfigurationRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::SetI2CConfigurationRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::SetI2CConfigurationRequest_<ContainerAllocator>& v)
  {
    s << indent << "input: ";
    s << std::endl;
    Printer< ::kortex_driver::I2CConfiguration_<ContainerAllocator> >::stream(s, indent + "  ", v.input);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_SETI2CCONFIGURATIONREQUEST_H