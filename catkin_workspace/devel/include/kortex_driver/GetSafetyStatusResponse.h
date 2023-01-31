// Generated by gencpp from file kortex_driver/GetSafetyStatusResponse.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_GETSAFETYSTATUSRESPONSE_H
#define KORTEX_DRIVER_MESSAGE_GETSAFETYSTATUSRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/SafetyStatus.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct GetSafetyStatusResponse_
{
  typedef GetSafetyStatusResponse_<ContainerAllocator> Type;

  GetSafetyStatusResponse_()
    : output()  {
    }
  GetSafetyStatusResponse_(const ContainerAllocator& _alloc)
    : output(_alloc)  {
  (void)_alloc;
    }



   typedef  ::kortex_driver::SafetyStatus_<ContainerAllocator>  _output_type;
  _output_type output;





  typedef boost::shared_ptr< ::kortex_driver::GetSafetyStatusResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::GetSafetyStatusResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetSafetyStatusResponse_

typedef ::kortex_driver::GetSafetyStatusResponse_<std::allocator<void> > GetSafetyStatusResponse;

typedef boost::shared_ptr< ::kortex_driver::GetSafetyStatusResponse > GetSafetyStatusResponsePtr;
typedef boost::shared_ptr< ::kortex_driver::GetSafetyStatusResponse const> GetSafetyStatusResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::GetSafetyStatusResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::GetSafetyStatusResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::GetSafetyStatusResponse_<ContainerAllocator1> & lhs, const ::kortex_driver::GetSafetyStatusResponse_<ContainerAllocator2> & rhs)
{
  return lhs.output == rhs.output;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::GetSafetyStatusResponse_<ContainerAllocator1> & lhs, const ::kortex_driver::GetSafetyStatusResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::GetSafetyStatusResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::GetSafetyStatusResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::GetSafetyStatusResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::GetSafetyStatusResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::GetSafetyStatusResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::GetSafetyStatusResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::GetSafetyStatusResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a325384bd39bef34e5243a4f8547a90d";
  }

  static const char* value(const ::kortex_driver::GetSafetyStatusResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa325384bd39bef34ULL;
  static const uint64_t static_value2 = 0xe5243a4f8547a90dULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::GetSafetyStatusResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/GetSafetyStatusResponse";
  }

  static const char* value(const ::kortex_driver::GetSafetyStatusResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::GetSafetyStatusResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "SafetyStatus output\n"
"\n"
"================================================================================\n"
"MSG: kortex_driver/SafetyStatus\n"
"\n"
"uint32 value\n"
;
  }

  static const char* value(const ::kortex_driver::GetSafetyStatusResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::GetSafetyStatusResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.output);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetSafetyStatusResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::GetSafetyStatusResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::GetSafetyStatusResponse_<ContainerAllocator>& v)
  {
    s << indent << "output: ";
    s << std::endl;
    Printer< ::kortex_driver::SafetyStatus_<ContainerAllocator> >::stream(s, indent + "  ", v.output);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_GETSAFETYSTATUSRESPONSE_H
