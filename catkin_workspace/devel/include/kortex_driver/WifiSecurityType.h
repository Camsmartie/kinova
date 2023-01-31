// Generated by gencpp from file kortex_driver/WifiSecurityType.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_WIFISECURITYTYPE_H
#define KORTEX_DRIVER_MESSAGE_WIFISECURITYTYPE_H


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
struct WifiSecurityType_
{
  typedef WifiSecurityType_<ContainerAllocator> Type;

  WifiSecurityType_()
    {
    }
  WifiSecurityType_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }





// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(UNSPECIFIED_AUTHENTICATION)
  #undef UNSPECIFIED_AUTHENTICATION
#endif
#if defined(_WIN32) && defined(WEP)
  #undef WEP
#endif
#if defined(_WIN32) && defined(WPA2_PERSONAL)
  #undef WPA2_PERSONAL
#endif
#if defined(_WIN32) && defined(WPA_PERSONAL)
  #undef WPA_PERSONAL
#endif
#if defined(_WIN32) && defined(NO_AUTHENTICATION)
  #undef NO_AUTHENTICATION
#endif

  enum {
    UNSPECIFIED_AUTHENTICATION = 0u,
    WEP = 1u,
    WPA2_PERSONAL = 2u,
    WPA_PERSONAL = 4u,
    NO_AUTHENTICATION = 8u,
  };


  typedef boost::shared_ptr< ::kortex_driver::WifiSecurityType_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::WifiSecurityType_<ContainerAllocator> const> ConstPtr;

}; // struct WifiSecurityType_

typedef ::kortex_driver::WifiSecurityType_<std::allocator<void> > WifiSecurityType;

typedef boost::shared_ptr< ::kortex_driver::WifiSecurityType > WifiSecurityTypePtr;
typedef boost::shared_ptr< ::kortex_driver::WifiSecurityType const> WifiSecurityTypeConstPtr;

// constants requiring out of line definition

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::WifiSecurityType_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::WifiSecurityType_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::WifiSecurityType_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::WifiSecurityType_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::WifiSecurityType_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::WifiSecurityType_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::WifiSecurityType_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::WifiSecurityType_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::WifiSecurityType_<ContainerAllocator> >
{
  static const char* value()
  {
    return "758c13b30796cf34636bc4ccee207084";
  }

  static const char* value(const ::kortex_driver::WifiSecurityType_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x758c13b30796cf34ULL;
  static const uint64_t static_value2 = 0x636bc4ccee207084ULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::WifiSecurityType_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/WifiSecurityType";
  }

  static const char* value(const ::kortex_driver::WifiSecurityType_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::WifiSecurityType_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"uint32 UNSPECIFIED_AUTHENTICATION = 0\n"
"\n"
"uint32 WEP = 1\n"
"\n"
"uint32 WPA2_PERSONAL = 2\n"
"\n"
"uint32 WPA_PERSONAL = 4\n"
"\n"
"uint32 NO_AUTHENTICATION = 8\n"
;
  }

  static const char* value(const ::kortex_driver::WifiSecurityType_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::WifiSecurityType_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct WifiSecurityType_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::WifiSecurityType_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::kortex_driver::WifiSecurityType_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_WIFISECURITYTYPE_H
