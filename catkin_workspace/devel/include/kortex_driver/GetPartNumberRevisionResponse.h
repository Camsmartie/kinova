// Generated by gencpp from file kortex_driver/GetPartNumberRevisionResponse.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_GETPARTNUMBERREVISIONRESPONSE_H
#define KORTEX_DRIVER_MESSAGE_GETPARTNUMBERREVISIONRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/PartNumberRevision.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct GetPartNumberRevisionResponse_
{
  typedef GetPartNumberRevisionResponse_<ContainerAllocator> Type;

  GetPartNumberRevisionResponse_()
    : output()  {
    }
  GetPartNumberRevisionResponse_(const ContainerAllocator& _alloc)
    : output(_alloc)  {
  (void)_alloc;
    }



   typedef  ::kortex_driver::PartNumberRevision_<ContainerAllocator>  _output_type;
  _output_type output;





  typedef boost::shared_ptr< ::kortex_driver::GetPartNumberRevisionResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::GetPartNumberRevisionResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetPartNumberRevisionResponse_

typedef ::kortex_driver::GetPartNumberRevisionResponse_<std::allocator<void> > GetPartNumberRevisionResponse;

typedef boost::shared_ptr< ::kortex_driver::GetPartNumberRevisionResponse > GetPartNumberRevisionResponsePtr;
typedef boost::shared_ptr< ::kortex_driver::GetPartNumberRevisionResponse const> GetPartNumberRevisionResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::GetPartNumberRevisionResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::GetPartNumberRevisionResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::GetPartNumberRevisionResponse_<ContainerAllocator1> & lhs, const ::kortex_driver::GetPartNumberRevisionResponse_<ContainerAllocator2> & rhs)
{
  return lhs.output == rhs.output;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::GetPartNumberRevisionResponse_<ContainerAllocator1> & lhs, const ::kortex_driver::GetPartNumberRevisionResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::GetPartNumberRevisionResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::GetPartNumberRevisionResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::GetPartNumberRevisionResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::GetPartNumberRevisionResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::GetPartNumberRevisionResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::GetPartNumberRevisionResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::GetPartNumberRevisionResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6ed7d5205deef778939c240d3a8dd61a";
  }

  static const char* value(const ::kortex_driver::GetPartNumberRevisionResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6ed7d5205deef778ULL;
  static const uint64_t static_value2 = 0x939c240d3a8dd61aULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::GetPartNumberRevisionResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/GetPartNumberRevisionResponse";
  }

  static const char* value(const ::kortex_driver::GetPartNumberRevisionResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::GetPartNumberRevisionResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "PartNumberRevision output\n"
"\n"
"================================================================================\n"
"MSG: kortex_driver/PartNumberRevision\n"
"\n"
"string part_number_revision\n"
;
  }

  static const char* value(const ::kortex_driver::GetPartNumberRevisionResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::GetPartNumberRevisionResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.output);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetPartNumberRevisionResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::GetPartNumberRevisionResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::GetPartNumberRevisionResponse_<ContainerAllocator>& v)
  {
    s << indent << "output: ";
    s << std::endl;
    Printer< ::kortex_driver::PartNumberRevision_<ContainerAllocator> >::stream(s, indent + "  ", v.output);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_GETPARTNUMBERREVISIONRESPONSE_H