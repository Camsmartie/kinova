// Generated by gencpp from file kortex_driver/SwapSequenceTasksRequest.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_SWAPSEQUENCETASKSREQUEST_H
#define KORTEX_DRIVER_MESSAGE_SWAPSEQUENCETASKSREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/SequenceTasksPair.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct SwapSequenceTasksRequest_
{
  typedef SwapSequenceTasksRequest_<ContainerAllocator> Type;

  SwapSequenceTasksRequest_()
    : input()  {
    }
  SwapSequenceTasksRequest_(const ContainerAllocator& _alloc)
    : input(_alloc)  {
  (void)_alloc;
    }



   typedef  ::kortex_driver::SequenceTasksPair_<ContainerAllocator>  _input_type;
  _input_type input;





  typedef boost::shared_ptr< ::kortex_driver::SwapSequenceTasksRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::SwapSequenceTasksRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SwapSequenceTasksRequest_

typedef ::kortex_driver::SwapSequenceTasksRequest_<std::allocator<void> > SwapSequenceTasksRequest;

typedef boost::shared_ptr< ::kortex_driver::SwapSequenceTasksRequest > SwapSequenceTasksRequestPtr;
typedef boost::shared_ptr< ::kortex_driver::SwapSequenceTasksRequest const> SwapSequenceTasksRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::SwapSequenceTasksRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::SwapSequenceTasksRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::SwapSequenceTasksRequest_<ContainerAllocator1> & lhs, const ::kortex_driver::SwapSequenceTasksRequest_<ContainerAllocator2> & rhs)
{
  return lhs.input == rhs.input;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::SwapSequenceTasksRequest_<ContainerAllocator1> & lhs, const ::kortex_driver::SwapSequenceTasksRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::SwapSequenceTasksRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::SwapSequenceTasksRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::SwapSequenceTasksRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::SwapSequenceTasksRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::SwapSequenceTasksRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::SwapSequenceTasksRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::SwapSequenceTasksRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "494d10349695f1abf33970c62e6c9551";
  }

  static const char* value(const ::kortex_driver::SwapSequenceTasksRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x494d10349695f1abULL;
  static const uint64_t static_value2 = 0xf33970c62e6c9551ULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::SwapSequenceTasksRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/SwapSequenceTasksRequest";
  }

  static const char* value(const ::kortex_driver::SwapSequenceTasksRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::SwapSequenceTasksRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "SequenceTasksPair input\n"
"\n"
"================================================================================\n"
"MSG: kortex_driver/SequenceTasksPair\n"
"\n"
"SequenceHandle sequence_handle\n"
"uint32 first_task_index\n"
"uint32 second_task_index\n"
"================================================================================\n"
"MSG: kortex_driver/SequenceHandle\n"
"\n"
"uint32 identifier\n"
"uint32 permission\n"
;
  }

  static const char* value(const ::kortex_driver::SwapSequenceTasksRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::SwapSequenceTasksRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.input);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SwapSequenceTasksRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::SwapSequenceTasksRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::SwapSequenceTasksRequest_<ContainerAllocator>& v)
  {
    s << indent << "input: ";
    s << std::endl;
    Printer< ::kortex_driver::SequenceTasksPair_<ContainerAllocator> >::stream(s, indent + "  ", v.input);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_SWAPSEQUENCETASKSREQUEST_H
