// Generated by gencpp from file kortex_driver/DuplicateMapRequest.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_DUPLICATEMAPREQUEST_H
#define KORTEX_DRIVER_MESSAGE_DUPLICATEMAPREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/MapHandle.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct DuplicateMapRequest_
{
  typedef DuplicateMapRequest_<ContainerAllocator> Type;

  DuplicateMapRequest_()
    : input()  {
    }
  DuplicateMapRequest_(const ContainerAllocator& _alloc)
    : input(_alloc)  {
  (void)_alloc;
    }



   typedef  ::kortex_driver::MapHandle_<ContainerAllocator>  _input_type;
  _input_type input;





  typedef boost::shared_ptr< ::kortex_driver::DuplicateMapRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::DuplicateMapRequest_<ContainerAllocator> const> ConstPtr;

}; // struct DuplicateMapRequest_

typedef ::kortex_driver::DuplicateMapRequest_<std::allocator<void> > DuplicateMapRequest;

typedef boost::shared_ptr< ::kortex_driver::DuplicateMapRequest > DuplicateMapRequestPtr;
typedef boost::shared_ptr< ::kortex_driver::DuplicateMapRequest const> DuplicateMapRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::DuplicateMapRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::DuplicateMapRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::DuplicateMapRequest_<ContainerAllocator1> & lhs, const ::kortex_driver::DuplicateMapRequest_<ContainerAllocator2> & rhs)
{
  return lhs.input == rhs.input;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::DuplicateMapRequest_<ContainerAllocator1> & lhs, const ::kortex_driver::DuplicateMapRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::DuplicateMapRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::DuplicateMapRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::DuplicateMapRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::DuplicateMapRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::DuplicateMapRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::DuplicateMapRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::DuplicateMapRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5bece15bd6f474817d8cf8261b2df5e4";
  }

  static const char* value(const ::kortex_driver::DuplicateMapRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5bece15bd6f47481ULL;
  static const uint64_t static_value2 = 0x7d8cf8261b2df5e4ULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::DuplicateMapRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/DuplicateMapRequest";
  }

  static const char* value(const ::kortex_driver::DuplicateMapRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::DuplicateMapRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "MapHandle input\n"
"\n"
"================================================================================\n"
"MSG: kortex_driver/MapHandle\n"
"\n"
"uint32 identifier\n"
"uint32 permission\n"
;
  }

  static const char* value(const ::kortex_driver::DuplicateMapRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::DuplicateMapRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.input);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DuplicateMapRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::DuplicateMapRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::DuplicateMapRequest_<ContainerAllocator>& v)
  {
    s << indent << "input: ";
    s << std::endl;
    Printer< ::kortex_driver::MapHandle_<ContainerAllocator> >::stream(s, indent + "  ", v.input);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_DUPLICATEMAPREQUEST_H
