// Generated by gencpp from file kortex_driver/UARTParity.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_UARTPARITY_H
#define KORTEX_DRIVER_MESSAGE_UARTPARITY_H


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
struct UARTParity_
{
  typedef UARTParity_<ContainerAllocator> Type;

  UARTParity_()
    {
    }
  UARTParity_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }





// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(UART_PARITY_UNSPECIFIED)
  #undef UART_PARITY_UNSPECIFIED
#endif
#if defined(_WIN32) && defined(UART_PARITY_NONE)
  #undef UART_PARITY_NONE
#endif
#if defined(_WIN32) && defined(UART_PARITY_ODD)
  #undef UART_PARITY_ODD
#endif
#if defined(_WIN32) && defined(UART_PARITY_EVEN)
  #undef UART_PARITY_EVEN
#endif

  enum {
    UART_PARITY_UNSPECIFIED = 0u,
    UART_PARITY_NONE = 1u,
    UART_PARITY_ODD = 2u,
    UART_PARITY_EVEN = 3u,
  };


  typedef boost::shared_ptr< ::kortex_driver::UARTParity_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::UARTParity_<ContainerAllocator> const> ConstPtr;

}; // struct UARTParity_

typedef ::kortex_driver::UARTParity_<std::allocator<void> > UARTParity;

typedef boost::shared_ptr< ::kortex_driver::UARTParity > UARTParityPtr;
typedef boost::shared_ptr< ::kortex_driver::UARTParity const> UARTParityConstPtr;

// constants requiring out of line definition

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::UARTParity_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::UARTParity_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::UARTParity_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::UARTParity_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::UARTParity_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::UARTParity_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::UARTParity_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::UARTParity_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::UARTParity_<ContainerAllocator> >
{
  static const char* value()
  {
    return "02ea0fa72b95d9977ccc489459fb1109";
  }

  static const char* value(const ::kortex_driver::UARTParity_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x02ea0fa72b95d997ULL;
  static const uint64_t static_value2 = 0x7ccc489459fb1109ULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::UARTParity_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/UARTParity";
  }

  static const char* value(const ::kortex_driver::UARTParity_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::UARTParity_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"uint32 UART_PARITY_UNSPECIFIED = 0\n"
"\n"
"uint32 UART_PARITY_NONE = 1\n"
"\n"
"uint32 UART_PARITY_ODD = 2\n"
"\n"
"uint32 UART_PARITY_EVEN = 3\n"
;
  }

  static const char* value(const ::kortex_driver::UARTParity_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::UARTParity_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct UARTParity_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::UARTParity_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::kortex_driver::UARTParity_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_UARTPARITY_H
