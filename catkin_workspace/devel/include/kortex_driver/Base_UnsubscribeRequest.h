// Generated by gencpp from file kortex_driver/Base_UnsubscribeRequest.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_BASE_UNSUBSCRIBEREQUEST_H
#define KORTEX_DRIVER_MESSAGE_BASE_UNSUBSCRIBEREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/NotificationHandle.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct Base_UnsubscribeRequest_
{
  typedef Base_UnsubscribeRequest_<ContainerAllocator> Type;

  Base_UnsubscribeRequest_()
    : input()  {
    }
  Base_UnsubscribeRequest_(const ContainerAllocator& _alloc)
    : input(_alloc)  {
  (void)_alloc;
    }



   typedef  ::kortex_driver::NotificationHandle_<ContainerAllocator>  _input_type;
  _input_type input;





  typedef boost::shared_ptr< ::kortex_driver::Base_UnsubscribeRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::Base_UnsubscribeRequest_<ContainerAllocator> const> ConstPtr;

}; // struct Base_UnsubscribeRequest_

typedef ::kortex_driver::Base_UnsubscribeRequest_<std::allocator<void> > Base_UnsubscribeRequest;

typedef boost::shared_ptr< ::kortex_driver::Base_UnsubscribeRequest > Base_UnsubscribeRequestPtr;
typedef boost::shared_ptr< ::kortex_driver::Base_UnsubscribeRequest const> Base_UnsubscribeRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::Base_UnsubscribeRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::Base_UnsubscribeRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::Base_UnsubscribeRequest_<ContainerAllocator1> & lhs, const ::kortex_driver::Base_UnsubscribeRequest_<ContainerAllocator2> & rhs)
{
  return lhs.input == rhs.input;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::Base_UnsubscribeRequest_<ContainerAllocator1> & lhs, const ::kortex_driver::Base_UnsubscribeRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::Base_UnsubscribeRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::Base_UnsubscribeRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::Base_UnsubscribeRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::Base_UnsubscribeRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::Base_UnsubscribeRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::Base_UnsubscribeRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::Base_UnsubscribeRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "28fc5544fa28c41b8590a221a4f4db30";
  }

  static const char* value(const ::kortex_driver::Base_UnsubscribeRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x28fc5544fa28c41bULL;
  static const uint64_t static_value2 = 0x8590a221a4f4db30ULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::Base_UnsubscribeRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/Base_UnsubscribeRequest";
  }

  static const char* value(const ::kortex_driver::Base_UnsubscribeRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::Base_UnsubscribeRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "NotificationHandle input\n"
"\n"
"================================================================================\n"
"MSG: kortex_driver/NotificationHandle\n"
"\n"
"uint32 identifier\n"
;
  }

  static const char* value(const ::kortex_driver::Base_UnsubscribeRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::Base_UnsubscribeRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.input);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Base_UnsubscribeRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::Base_UnsubscribeRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::Base_UnsubscribeRequest_<ContainerAllocator>& v)
  {
    s << indent << "input: ";
    s << std::endl;
    Printer< ::kortex_driver::NotificationHandle_<ContainerAllocator> >::stream(s, indent + "  ", v.input);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_BASE_UNSUBSCRIBEREQUEST_H
