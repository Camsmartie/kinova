// Generated by gencpp from file kortex_driver/GetMeasuredGripperMovementResponse.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_GETMEASUREDGRIPPERMOVEMENTRESPONSE_H
#define KORTEX_DRIVER_MESSAGE_GETMEASUREDGRIPPERMOVEMENTRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/Gripper.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct GetMeasuredGripperMovementResponse_
{
  typedef GetMeasuredGripperMovementResponse_<ContainerAllocator> Type;

  GetMeasuredGripperMovementResponse_()
    : output()  {
    }
  GetMeasuredGripperMovementResponse_(const ContainerAllocator& _alloc)
    : output(_alloc)  {
  (void)_alloc;
    }



   typedef  ::kortex_driver::Gripper_<ContainerAllocator>  _output_type;
  _output_type output;





  typedef boost::shared_ptr< ::kortex_driver::GetMeasuredGripperMovementResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::GetMeasuredGripperMovementResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetMeasuredGripperMovementResponse_

typedef ::kortex_driver::GetMeasuredGripperMovementResponse_<std::allocator<void> > GetMeasuredGripperMovementResponse;

typedef boost::shared_ptr< ::kortex_driver::GetMeasuredGripperMovementResponse > GetMeasuredGripperMovementResponsePtr;
typedef boost::shared_ptr< ::kortex_driver::GetMeasuredGripperMovementResponse const> GetMeasuredGripperMovementResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::GetMeasuredGripperMovementResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::GetMeasuredGripperMovementResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::GetMeasuredGripperMovementResponse_<ContainerAllocator1> & lhs, const ::kortex_driver::GetMeasuredGripperMovementResponse_<ContainerAllocator2> & rhs)
{
  return lhs.output == rhs.output;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::GetMeasuredGripperMovementResponse_<ContainerAllocator1> & lhs, const ::kortex_driver::GetMeasuredGripperMovementResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::GetMeasuredGripperMovementResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::GetMeasuredGripperMovementResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::GetMeasuredGripperMovementResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::GetMeasuredGripperMovementResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::GetMeasuredGripperMovementResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::GetMeasuredGripperMovementResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::GetMeasuredGripperMovementResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b2158919272cee2c2e359c210979abae";
  }

  static const char* value(const ::kortex_driver::GetMeasuredGripperMovementResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb2158919272cee2cULL;
  static const uint64_t static_value2 = 0x2e359c210979abaeULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::GetMeasuredGripperMovementResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/GetMeasuredGripperMovementResponse";
  }

  static const char* value(const ::kortex_driver::GetMeasuredGripperMovementResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::GetMeasuredGripperMovementResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Gripper output\n"
"\n"
"================================================================================\n"
"MSG: kortex_driver/Gripper\n"
"\n"
"Finger[] finger\n"
"================================================================================\n"
"MSG: kortex_driver/Finger\n"
"\n"
"uint32 finger_identifier\n"
"float32 value\n"
;
  }

  static const char* value(const ::kortex_driver::GetMeasuredGripperMovementResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::GetMeasuredGripperMovementResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.output);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetMeasuredGripperMovementResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::GetMeasuredGripperMovementResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::GetMeasuredGripperMovementResponse_<ContainerAllocator>& v)
  {
    s << indent << "output: ";
    s << std::endl;
    Printer< ::kortex_driver::Gripper_<ContainerAllocator> >::stream(s, indent + "  ", v.output);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_GETMEASUREDGRIPPERMOVEMENTRESPONSE_H