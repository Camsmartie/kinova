// Generated by gencpp from file kortex_driver/Base_GetCapSenseConfigResponse.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_BASE_GETCAPSENSECONFIGRESPONSE_H
#define KORTEX_DRIVER_MESSAGE_BASE_GETCAPSENSECONFIGRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/Base_CapSenseConfig.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct Base_GetCapSenseConfigResponse_
{
  typedef Base_GetCapSenseConfigResponse_<ContainerAllocator> Type;

  Base_GetCapSenseConfigResponse_()
    : output()  {
    }
  Base_GetCapSenseConfigResponse_(const ContainerAllocator& _alloc)
    : output(_alloc)  {
  (void)_alloc;
    }



   typedef  ::kortex_driver::Base_CapSenseConfig_<ContainerAllocator>  _output_type;
  _output_type output;





  typedef boost::shared_ptr< ::kortex_driver::Base_GetCapSenseConfigResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::Base_GetCapSenseConfigResponse_<ContainerAllocator> const> ConstPtr;

}; // struct Base_GetCapSenseConfigResponse_

typedef ::kortex_driver::Base_GetCapSenseConfigResponse_<std::allocator<void> > Base_GetCapSenseConfigResponse;

typedef boost::shared_ptr< ::kortex_driver::Base_GetCapSenseConfigResponse > Base_GetCapSenseConfigResponsePtr;
typedef boost::shared_ptr< ::kortex_driver::Base_GetCapSenseConfigResponse const> Base_GetCapSenseConfigResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::Base_GetCapSenseConfigResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::Base_GetCapSenseConfigResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::Base_GetCapSenseConfigResponse_<ContainerAllocator1> & lhs, const ::kortex_driver::Base_GetCapSenseConfigResponse_<ContainerAllocator2> & rhs)
{
  return lhs.output == rhs.output;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::Base_GetCapSenseConfigResponse_<ContainerAllocator1> & lhs, const ::kortex_driver::Base_GetCapSenseConfigResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::Base_GetCapSenseConfigResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::Base_GetCapSenseConfigResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::Base_GetCapSenseConfigResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::Base_GetCapSenseConfigResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::Base_GetCapSenseConfigResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::Base_GetCapSenseConfigResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::Base_GetCapSenseConfigResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bc44a7b8344ef8901e438f3dcd94715f";
  }

  static const char* value(const ::kortex_driver::Base_GetCapSenseConfigResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xbc44a7b8344ef890ULL;
  static const uint64_t static_value2 = 0x1e438f3dcd94715fULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::Base_GetCapSenseConfigResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/Base_GetCapSenseConfigResponse";
  }

  static const char* value(const ::kortex_driver::Base_GetCapSenseConfigResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::Base_GetCapSenseConfigResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Base_CapSenseConfig output\n"
"\n"
"================================================================================\n"
"MSG: kortex_driver/Base_CapSenseConfig\n"
"\n"
"uint32 identifier\n"
"uint32 mode\n"
"float32 threshold_a\n"
"float32 threshold_b\n"
"float32 sensitivity_a\n"
"float32 sensitivity_b\n"
;
  }

  static const char* value(const ::kortex_driver::Base_GetCapSenseConfigResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::Base_GetCapSenseConfigResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.output);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Base_GetCapSenseConfigResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::Base_GetCapSenseConfigResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::Base_GetCapSenseConfigResponse_<ContainerAllocator>& v)
  {
    s << indent << "output: ";
    s << std::endl;
    Printer< ::kortex_driver::Base_CapSenseConfig_<ContainerAllocator> >::stream(s, indent + "  ", v.output);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_BASE_GETCAPSENSECONFIGRESPONSE_H
