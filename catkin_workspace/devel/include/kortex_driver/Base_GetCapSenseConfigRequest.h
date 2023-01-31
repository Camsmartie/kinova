// Generated by gencpp from file kortex_driver/Base_GetCapSenseConfigRequest.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_BASE_GETCAPSENSECONFIGREQUEST_H
#define KORTEX_DRIVER_MESSAGE_BASE_GETCAPSENSECONFIGREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/Empty.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct Base_GetCapSenseConfigRequest_
{
  typedef Base_GetCapSenseConfigRequest_<ContainerAllocator> Type;

  Base_GetCapSenseConfigRequest_()
    : input()  {
    }
  Base_GetCapSenseConfigRequest_(const ContainerAllocator& _alloc)
    : input(_alloc)  {
  (void)_alloc;
    }



   typedef  ::kortex_driver::Empty_<ContainerAllocator>  _input_type;
  _input_type input;





  typedef boost::shared_ptr< ::kortex_driver::Base_GetCapSenseConfigRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::Base_GetCapSenseConfigRequest_<ContainerAllocator> const> ConstPtr;

}; // struct Base_GetCapSenseConfigRequest_

typedef ::kortex_driver::Base_GetCapSenseConfigRequest_<std::allocator<void> > Base_GetCapSenseConfigRequest;

typedef boost::shared_ptr< ::kortex_driver::Base_GetCapSenseConfigRequest > Base_GetCapSenseConfigRequestPtr;
typedef boost::shared_ptr< ::kortex_driver::Base_GetCapSenseConfigRequest const> Base_GetCapSenseConfigRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::Base_GetCapSenseConfigRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::Base_GetCapSenseConfigRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::Base_GetCapSenseConfigRequest_<ContainerAllocator1> & lhs, const ::kortex_driver::Base_GetCapSenseConfigRequest_<ContainerAllocator2> & rhs)
{
  return lhs.input == rhs.input;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::Base_GetCapSenseConfigRequest_<ContainerAllocator1> & lhs, const ::kortex_driver::Base_GetCapSenseConfigRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::Base_GetCapSenseConfigRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::Base_GetCapSenseConfigRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::Base_GetCapSenseConfigRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::Base_GetCapSenseConfigRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::Base_GetCapSenseConfigRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::Base_GetCapSenseConfigRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::Base_GetCapSenseConfigRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "fa3403cd5897c9698bc0fdcb2a453fbc";
  }

  static const char* value(const ::kortex_driver::Base_GetCapSenseConfigRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xfa3403cd5897c969ULL;
  static const uint64_t static_value2 = 0x8bc0fdcb2a453fbcULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::Base_GetCapSenseConfigRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/Base_GetCapSenseConfigRequest";
  }

  static const char* value(const ::kortex_driver::Base_GetCapSenseConfigRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::Base_GetCapSenseConfigRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Empty input\n"
"\n"
"================================================================================\n"
"MSG: kortex_driver/Empty\n"
;
  }

  static const char* value(const ::kortex_driver::Base_GetCapSenseConfigRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::Base_GetCapSenseConfigRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.input);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Base_GetCapSenseConfigRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::Base_GetCapSenseConfigRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::Base_GetCapSenseConfigRequest_<ContainerAllocator>& v)
  {
    s << indent << "input: ";
    s << std::endl;
    Printer< ::kortex_driver::Empty_<ContainerAllocator> >::stream(s, indent + "  ", v.input);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_BASE_GETCAPSENSECONFIGREQUEST_H
