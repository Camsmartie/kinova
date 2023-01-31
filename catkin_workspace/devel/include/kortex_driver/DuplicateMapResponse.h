// Generated by gencpp from file kortex_driver/DuplicateMapResponse.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_DUPLICATEMAPRESPONSE_H
#define KORTEX_DRIVER_MESSAGE_DUPLICATEMAPRESPONSE_H


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
struct DuplicateMapResponse_
{
  typedef DuplicateMapResponse_<ContainerAllocator> Type;

  DuplicateMapResponse_()
    : output()  {
    }
  DuplicateMapResponse_(const ContainerAllocator& _alloc)
    : output(_alloc)  {
  (void)_alloc;
    }



   typedef  ::kortex_driver::MapHandle_<ContainerAllocator>  _output_type;
  _output_type output;





  typedef boost::shared_ptr< ::kortex_driver::DuplicateMapResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::DuplicateMapResponse_<ContainerAllocator> const> ConstPtr;

}; // struct DuplicateMapResponse_

typedef ::kortex_driver::DuplicateMapResponse_<std::allocator<void> > DuplicateMapResponse;

typedef boost::shared_ptr< ::kortex_driver::DuplicateMapResponse > DuplicateMapResponsePtr;
typedef boost::shared_ptr< ::kortex_driver::DuplicateMapResponse const> DuplicateMapResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::DuplicateMapResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::DuplicateMapResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::DuplicateMapResponse_<ContainerAllocator1> & lhs, const ::kortex_driver::DuplicateMapResponse_<ContainerAllocator2> & rhs)
{
  return lhs.output == rhs.output;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::DuplicateMapResponse_<ContainerAllocator1> & lhs, const ::kortex_driver::DuplicateMapResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::DuplicateMapResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::DuplicateMapResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::DuplicateMapResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::DuplicateMapResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::DuplicateMapResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::DuplicateMapResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::DuplicateMapResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "335f209b31742c233f4d4fd3cb08b30f";
  }

  static const char* value(const ::kortex_driver::DuplicateMapResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x335f209b31742c23ULL;
  static const uint64_t static_value2 = 0x3f4d4fd3cb08b30fULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::DuplicateMapResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/DuplicateMapResponse";
  }

  static const char* value(const ::kortex_driver::DuplicateMapResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::DuplicateMapResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "MapHandle output\n"
"\n"
"================================================================================\n"
"MSG: kortex_driver/MapHandle\n"
"\n"
"uint32 identifier\n"
"uint32 permission\n"
;
  }

  static const char* value(const ::kortex_driver::DuplicateMapResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::DuplicateMapResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.output);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DuplicateMapResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::DuplicateMapResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::DuplicateMapResponse_<ContainerAllocator>& v)
  {
    s << indent << "output: ";
    s << std::endl;
    Printer< ::kortex_driver::MapHandle_<ContainerAllocator> >::stream(s, indent + "  ", v.output);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_DUPLICATEMAPRESPONSE_H
