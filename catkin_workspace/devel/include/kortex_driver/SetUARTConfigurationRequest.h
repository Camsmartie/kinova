// Generated by gencpp from file kortex_driver/SetUARTConfigurationRequest.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_SETUARTCONFIGURATIONREQUEST_H
#define KORTEX_DRIVER_MESSAGE_SETUARTCONFIGURATIONREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/UARTConfiguration.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct SetUARTConfigurationRequest_
{
  typedef SetUARTConfigurationRequest_<ContainerAllocator> Type;

  SetUARTConfigurationRequest_()
    : input()  {
    }
  SetUARTConfigurationRequest_(const ContainerAllocator& _alloc)
    : input(_alloc)  {
  (void)_alloc;
    }



   typedef  ::kortex_driver::UARTConfiguration_<ContainerAllocator>  _input_type;
  _input_type input;





  typedef boost::shared_ptr< ::kortex_driver::SetUARTConfigurationRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::SetUARTConfigurationRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetUARTConfigurationRequest_

typedef ::kortex_driver::SetUARTConfigurationRequest_<std::allocator<void> > SetUARTConfigurationRequest;

typedef boost::shared_ptr< ::kortex_driver::SetUARTConfigurationRequest > SetUARTConfigurationRequestPtr;
typedef boost::shared_ptr< ::kortex_driver::SetUARTConfigurationRequest const> SetUARTConfigurationRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::SetUARTConfigurationRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::SetUARTConfigurationRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::SetUARTConfigurationRequest_<ContainerAllocator1> & lhs, const ::kortex_driver::SetUARTConfigurationRequest_<ContainerAllocator2> & rhs)
{
  return lhs.input == rhs.input;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::SetUARTConfigurationRequest_<ContainerAllocator1> & lhs, const ::kortex_driver::SetUARTConfigurationRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::SetUARTConfigurationRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::SetUARTConfigurationRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::SetUARTConfigurationRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::SetUARTConfigurationRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::SetUARTConfigurationRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::SetUARTConfigurationRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::SetUARTConfigurationRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "eceb321f8997936dda06bf896214627a";
  }

  static const char* value(const ::kortex_driver::SetUARTConfigurationRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xeceb321f8997936dULL;
  static const uint64_t static_value2 = 0xda06bf896214627aULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::SetUARTConfigurationRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/SetUARTConfigurationRequest";
  }

  static const char* value(const ::kortex_driver::SetUARTConfigurationRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::SetUARTConfigurationRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "UARTConfiguration input\n"
"\n"
"================================================================================\n"
"MSG: kortex_driver/UARTConfiguration\n"
"\n"
"uint32 port_id\n"
"bool enabled\n"
"uint32 speed\n"
"uint32 word_length\n"
"uint32 stop_bits\n"
"uint32 parity\n"
;
  }

  static const char* value(const ::kortex_driver::SetUARTConfigurationRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::SetUARTConfigurationRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.input);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetUARTConfigurationRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::SetUARTConfigurationRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::SetUARTConfigurationRequest_<ContainerAllocator>& v)
  {
    s << indent << "input: ";
    s << std::endl;
    Printer< ::kortex_driver::UARTConfiguration_<ContainerAllocator> >::stream(s, indent + "  ", v.input);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_SETUARTCONFIGURATIONREQUEST_H
