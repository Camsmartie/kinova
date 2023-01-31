// Generated by gencpp from file kortex_driver/WifiEncryptionType.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_WIFIENCRYPTIONTYPE_H
#define KORTEX_DRIVER_MESSAGE_WIFIENCRYPTIONTYPE_H


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
struct WifiEncryptionType_
{
  typedef WifiEncryptionType_<ContainerAllocator> Type;

  WifiEncryptionType_()
    {
    }
  WifiEncryptionType_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }





// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(UNSPECIFIED_ENCRYPTION)
  #undef UNSPECIFIED_ENCRYPTION
#endif
#if defined(_WIN32) && defined(AES_ENCRYPTION)
  #undef AES_ENCRYPTION
#endif
#if defined(_WIN32) && defined(TKIP_ENCRYPTION)
  #undef TKIP_ENCRYPTION
#endif
#if defined(_WIN32) && defined(WEP_ENCRYPTION)
  #undef WEP_ENCRYPTION
#endif

  enum {
    UNSPECIFIED_ENCRYPTION = 0u,
    AES_ENCRYPTION = 1u,
    TKIP_ENCRYPTION = 2u,
    WEP_ENCRYPTION = 4u,
  };


  typedef boost::shared_ptr< ::kortex_driver::WifiEncryptionType_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::WifiEncryptionType_<ContainerAllocator> const> ConstPtr;

}; // struct WifiEncryptionType_

typedef ::kortex_driver::WifiEncryptionType_<std::allocator<void> > WifiEncryptionType;

typedef boost::shared_ptr< ::kortex_driver::WifiEncryptionType > WifiEncryptionTypePtr;
typedef boost::shared_ptr< ::kortex_driver::WifiEncryptionType const> WifiEncryptionTypeConstPtr;

// constants requiring out of line definition

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::WifiEncryptionType_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::WifiEncryptionType_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::WifiEncryptionType_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::WifiEncryptionType_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::WifiEncryptionType_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::WifiEncryptionType_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::WifiEncryptionType_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::WifiEncryptionType_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::WifiEncryptionType_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5312088e9fe010ba1511377fa25b980d";
  }

  static const char* value(const ::kortex_driver::WifiEncryptionType_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5312088e9fe010baULL;
  static const uint64_t static_value2 = 0x1511377fa25b980dULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::WifiEncryptionType_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/WifiEncryptionType";
  }

  static const char* value(const ::kortex_driver::WifiEncryptionType_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::WifiEncryptionType_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"uint32 UNSPECIFIED_ENCRYPTION = 0\n"
"\n"
"uint32 AES_ENCRYPTION = 1\n"
"\n"
"uint32 TKIP_ENCRYPTION = 2\n"
"\n"
"uint32 WEP_ENCRYPTION = 4\n"
;
  }

  static const char* value(const ::kortex_driver::WifiEncryptionType_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::WifiEncryptionType_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct WifiEncryptionType_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::WifiEncryptionType_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::kortex_driver::WifiEncryptionType_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_WIFIENCRYPTIONTYPE_H
