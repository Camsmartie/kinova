// Generated by gencpp from file kortex_driver/CommunicationInterfaceConfiguration.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_COMMUNICATIONINTERFACECONFIGURATION_H
#define KORTEX_DRIVER_MESSAGE_COMMUNICATIONINTERFACECONFIGURATION_H


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
struct CommunicationInterfaceConfiguration_
{
  typedef CommunicationInterfaceConfiguration_<ContainerAllocator> Type;

  CommunicationInterfaceConfiguration_()
    : type(0)
    , enable(false)  {
    }
  CommunicationInterfaceConfiguration_(const ContainerAllocator& _alloc)
    : type(0)
    , enable(false)  {
  (void)_alloc;
    }



   typedef uint32_t _type_type;
  _type_type type;

   typedef uint8_t _enable_type;
  _enable_type enable;





  typedef boost::shared_ptr< ::kortex_driver::CommunicationInterfaceConfiguration_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::CommunicationInterfaceConfiguration_<ContainerAllocator> const> ConstPtr;

}; // struct CommunicationInterfaceConfiguration_

typedef ::kortex_driver::CommunicationInterfaceConfiguration_<std::allocator<void> > CommunicationInterfaceConfiguration;

typedef boost::shared_ptr< ::kortex_driver::CommunicationInterfaceConfiguration > CommunicationInterfaceConfigurationPtr;
typedef boost::shared_ptr< ::kortex_driver::CommunicationInterfaceConfiguration const> CommunicationInterfaceConfigurationConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::CommunicationInterfaceConfiguration_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::CommunicationInterfaceConfiguration_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::CommunicationInterfaceConfiguration_<ContainerAllocator1> & lhs, const ::kortex_driver::CommunicationInterfaceConfiguration_<ContainerAllocator2> & rhs)
{
  return lhs.type == rhs.type &&
    lhs.enable == rhs.enable;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::CommunicationInterfaceConfiguration_<ContainerAllocator1> & lhs, const ::kortex_driver::CommunicationInterfaceConfiguration_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::CommunicationInterfaceConfiguration_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::CommunicationInterfaceConfiguration_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::CommunicationInterfaceConfiguration_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::CommunicationInterfaceConfiguration_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::CommunicationInterfaceConfiguration_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::CommunicationInterfaceConfiguration_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::CommunicationInterfaceConfiguration_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5a1523f2cb0646f5be12fd2c14b0a2a7";
  }

  static const char* value(const ::kortex_driver::CommunicationInterfaceConfiguration_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5a1523f2cb0646f5ULL;
  static const uint64_t static_value2 = 0xbe12fd2c14b0a2a7ULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::CommunicationInterfaceConfiguration_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/CommunicationInterfaceConfiguration";
  }

  static const char* value(const ::kortex_driver::CommunicationInterfaceConfiguration_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::CommunicationInterfaceConfiguration_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"uint32 type\n"
"bool enable\n"
;
  }

  static const char* value(const ::kortex_driver::CommunicationInterfaceConfiguration_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::CommunicationInterfaceConfiguration_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.type);
      stream.next(m.enable);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CommunicationInterfaceConfiguration_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::CommunicationInterfaceConfiguration_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::CommunicationInterfaceConfiguration_<ContainerAllocator>& v)
  {
    s << indent << "type: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.type);
    s << indent << "enable: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.enable);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_COMMUNICATIONINTERFACECONFIGURATION_H