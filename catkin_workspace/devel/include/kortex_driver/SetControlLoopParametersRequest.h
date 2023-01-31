// Generated by gencpp from file kortex_driver/SetControlLoopParametersRequest.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_SETCONTROLLOOPPARAMETERSREQUEST_H
#define KORTEX_DRIVER_MESSAGE_SETCONTROLLOOPPARAMETERSREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/ControlLoopParameters.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct SetControlLoopParametersRequest_
{
  typedef SetControlLoopParametersRequest_<ContainerAllocator> Type;

  SetControlLoopParametersRequest_()
    : input()  {
    }
  SetControlLoopParametersRequest_(const ContainerAllocator& _alloc)
    : input(_alloc)  {
  (void)_alloc;
    }



   typedef  ::kortex_driver::ControlLoopParameters_<ContainerAllocator>  _input_type;
  _input_type input;





  typedef boost::shared_ptr< ::kortex_driver::SetControlLoopParametersRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::SetControlLoopParametersRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetControlLoopParametersRequest_

typedef ::kortex_driver::SetControlLoopParametersRequest_<std::allocator<void> > SetControlLoopParametersRequest;

typedef boost::shared_ptr< ::kortex_driver::SetControlLoopParametersRequest > SetControlLoopParametersRequestPtr;
typedef boost::shared_ptr< ::kortex_driver::SetControlLoopParametersRequest const> SetControlLoopParametersRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::SetControlLoopParametersRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::SetControlLoopParametersRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::SetControlLoopParametersRequest_<ContainerAllocator1> & lhs, const ::kortex_driver::SetControlLoopParametersRequest_<ContainerAllocator2> & rhs)
{
  return lhs.input == rhs.input;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::SetControlLoopParametersRequest_<ContainerAllocator1> & lhs, const ::kortex_driver::SetControlLoopParametersRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::SetControlLoopParametersRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::SetControlLoopParametersRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::SetControlLoopParametersRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::SetControlLoopParametersRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::SetControlLoopParametersRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::SetControlLoopParametersRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::SetControlLoopParametersRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2bb6506faeaa702f1bb7d4854ed5cc11";
  }

  static const char* value(const ::kortex_driver::SetControlLoopParametersRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2bb6506faeaa702fULL;
  static const uint64_t static_value2 = 0x1bb7d4854ed5cc11ULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::SetControlLoopParametersRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/SetControlLoopParametersRequest";
  }

  static const char* value(const ::kortex_driver::SetControlLoopParametersRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::SetControlLoopParametersRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ControlLoopParameters input\n"
"\n"
"================================================================================\n"
"MSG: kortex_driver/ControlLoopParameters\n"
"\n"
"uint32 loop_selection\n"
"float32 error_saturation\n"
"float32 output_saturation\n"
"float32[] kAz\n"
"float32[] kBz\n"
"float32 error_dead_band\n"
;
  }

  static const char* value(const ::kortex_driver::SetControlLoopParametersRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::SetControlLoopParametersRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.input);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetControlLoopParametersRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::SetControlLoopParametersRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::SetControlLoopParametersRequest_<ContainerAllocator>& v)
  {
    s << indent << "input: ";
    s << std::endl;
    Printer< ::kortex_driver::ControlLoopParameters_<ContainerAllocator> >::stream(s, indent + "  ", v.input);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_SETCONTROLLOOPPARAMETERSREQUEST_H
