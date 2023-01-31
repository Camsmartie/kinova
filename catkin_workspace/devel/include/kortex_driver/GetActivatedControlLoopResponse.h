// Generated by gencpp from file kortex_driver/GetActivatedControlLoopResponse.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_GETACTIVATEDCONTROLLOOPRESPONSE_H
#define KORTEX_DRIVER_MESSAGE_GETACTIVATEDCONTROLLOOPRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/ControlLoop.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct GetActivatedControlLoopResponse_
{
  typedef GetActivatedControlLoopResponse_<ContainerAllocator> Type;

  GetActivatedControlLoopResponse_()
    : output()  {
    }
  GetActivatedControlLoopResponse_(const ContainerAllocator& _alloc)
    : output(_alloc)  {
  (void)_alloc;
    }



   typedef  ::kortex_driver::ControlLoop_<ContainerAllocator>  _output_type;
  _output_type output;





  typedef boost::shared_ptr< ::kortex_driver::GetActivatedControlLoopResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::GetActivatedControlLoopResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetActivatedControlLoopResponse_

typedef ::kortex_driver::GetActivatedControlLoopResponse_<std::allocator<void> > GetActivatedControlLoopResponse;

typedef boost::shared_ptr< ::kortex_driver::GetActivatedControlLoopResponse > GetActivatedControlLoopResponsePtr;
typedef boost::shared_ptr< ::kortex_driver::GetActivatedControlLoopResponse const> GetActivatedControlLoopResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::GetActivatedControlLoopResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::GetActivatedControlLoopResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::GetActivatedControlLoopResponse_<ContainerAllocator1> & lhs, const ::kortex_driver::GetActivatedControlLoopResponse_<ContainerAllocator2> & rhs)
{
  return lhs.output == rhs.output;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::GetActivatedControlLoopResponse_<ContainerAllocator1> & lhs, const ::kortex_driver::GetActivatedControlLoopResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::GetActivatedControlLoopResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::GetActivatedControlLoopResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::GetActivatedControlLoopResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::GetActivatedControlLoopResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::GetActivatedControlLoopResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::GetActivatedControlLoopResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::GetActivatedControlLoopResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8659f757cac972f595e612f312c1c5a9";
  }

  static const char* value(const ::kortex_driver::GetActivatedControlLoopResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8659f757cac972f5ULL;
  static const uint64_t static_value2 = 0x95e612f312c1c5a9ULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::GetActivatedControlLoopResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/GetActivatedControlLoopResponse";
  }

  static const char* value(const ::kortex_driver::GetActivatedControlLoopResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::GetActivatedControlLoopResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ControlLoop output\n"
"\n"
"================================================================================\n"
"MSG: kortex_driver/ControlLoop\n"
"\n"
"uint32 control_loop\n"
;
  }

  static const char* value(const ::kortex_driver::GetActivatedControlLoopResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::GetActivatedControlLoopResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.output);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetActivatedControlLoopResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::GetActivatedControlLoopResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::GetActivatedControlLoopResponse_<ContainerAllocator>& v)
  {
    s << indent << "output: ";
    s << std::endl;
    Printer< ::kortex_driver::ControlLoop_<ContainerAllocator> >::stream(s, indent + "  ", v.output);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_GETACTIVATEDCONTROLLOOPRESPONSE_H
