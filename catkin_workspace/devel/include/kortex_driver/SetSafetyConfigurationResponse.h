// Generated by gencpp from file kortex_driver/SetSafetyConfigurationResponse.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_SETSAFETYCONFIGURATIONRESPONSE_H
#define KORTEX_DRIVER_MESSAGE_SETSAFETYCONFIGURATIONRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/Empty.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct SetSafetyConfigurationResponse_
{
  typedef SetSafetyConfigurationResponse_<ContainerAllocator> Type;

  SetSafetyConfigurationResponse_()
    : output()  {
    }
  SetSafetyConfigurationResponse_(const ContainerAllocator& _alloc)
    : output(_alloc)  {
  (void)_alloc;
    }



   typedef  ::kortex_driver::Empty_<ContainerAllocator>  _output_type;
  _output_type output;





  typedef boost::shared_ptr< ::kortex_driver::SetSafetyConfigurationResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::SetSafetyConfigurationResponse_<ContainerAllocator> const> ConstPtr;

}; // struct SetSafetyConfigurationResponse_

typedef ::kortex_driver::SetSafetyConfigurationResponse_<std::allocator<void> > SetSafetyConfigurationResponse;

typedef boost::shared_ptr< ::kortex_driver::SetSafetyConfigurationResponse > SetSafetyConfigurationResponsePtr;
typedef boost::shared_ptr< ::kortex_driver::SetSafetyConfigurationResponse const> SetSafetyConfigurationResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::SetSafetyConfigurationResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::SetSafetyConfigurationResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::SetSafetyConfigurationResponse_<ContainerAllocator1> & lhs, const ::kortex_driver::SetSafetyConfigurationResponse_<ContainerAllocator2> & rhs)
{
  return lhs.output == rhs.output;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::SetSafetyConfigurationResponse_<ContainerAllocator1> & lhs, const ::kortex_driver::SetSafetyConfigurationResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::SetSafetyConfigurationResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::SetSafetyConfigurationResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::SetSafetyConfigurationResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::SetSafetyConfigurationResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::SetSafetyConfigurationResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::SetSafetyConfigurationResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::SetSafetyConfigurationResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c6c43d221c810050f75091660f63b0cd";
  }

  static const char* value(const ::kortex_driver::SetSafetyConfigurationResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc6c43d221c810050ULL;
  static const uint64_t static_value2 = 0xf75091660f63b0cdULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::SetSafetyConfigurationResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/SetSafetyConfigurationResponse";
  }

  static const char* value(const ::kortex_driver::SetSafetyConfigurationResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::SetSafetyConfigurationResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Empty output\n"
"\n"
"================================================================================\n"
"MSG: kortex_driver/Empty\n"
;
  }

  static const char* value(const ::kortex_driver::SetSafetyConfigurationResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::SetSafetyConfigurationResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.output);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetSafetyConfigurationResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::SetSafetyConfigurationResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::SetSafetyConfigurationResponse_<ContainerAllocator>& v)
  {
    s << indent << "output: ";
    s << std::endl;
    Printer< ::kortex_driver::Empty_<ContainerAllocator> >::stream(s, indent + "  ", v.output);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_SETSAFETYCONFIGURATIONRESPONSE_H
