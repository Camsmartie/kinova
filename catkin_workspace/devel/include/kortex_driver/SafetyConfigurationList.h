// Generated by gencpp from file kortex_driver/SafetyConfigurationList.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_SAFETYCONFIGURATIONLIST_H
#define KORTEX_DRIVER_MESSAGE_SAFETYCONFIGURATIONLIST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/SafetyConfiguration.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct SafetyConfigurationList_
{
  typedef SafetyConfigurationList_<ContainerAllocator> Type;

  SafetyConfigurationList_()
    : configuration()  {
    }
  SafetyConfigurationList_(const ContainerAllocator& _alloc)
    : configuration(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::kortex_driver::SafetyConfiguration_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::kortex_driver::SafetyConfiguration_<ContainerAllocator> >::other >  _configuration_type;
  _configuration_type configuration;





  typedef boost::shared_ptr< ::kortex_driver::SafetyConfigurationList_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::SafetyConfigurationList_<ContainerAllocator> const> ConstPtr;

}; // struct SafetyConfigurationList_

typedef ::kortex_driver::SafetyConfigurationList_<std::allocator<void> > SafetyConfigurationList;

typedef boost::shared_ptr< ::kortex_driver::SafetyConfigurationList > SafetyConfigurationListPtr;
typedef boost::shared_ptr< ::kortex_driver::SafetyConfigurationList const> SafetyConfigurationListConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::SafetyConfigurationList_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::SafetyConfigurationList_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::SafetyConfigurationList_<ContainerAllocator1> & lhs, const ::kortex_driver::SafetyConfigurationList_<ContainerAllocator2> & rhs)
{
  return lhs.configuration == rhs.configuration;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::SafetyConfigurationList_<ContainerAllocator1> & lhs, const ::kortex_driver::SafetyConfigurationList_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::SafetyConfigurationList_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::SafetyConfigurationList_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::SafetyConfigurationList_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::SafetyConfigurationList_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::SafetyConfigurationList_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::SafetyConfigurationList_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::SafetyConfigurationList_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8178a2a82961f46646c77423c6510e4d";
  }

  static const char* value(const ::kortex_driver::SafetyConfigurationList_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8178a2a82961f466ULL;
  static const uint64_t static_value2 = 0x46c77423c6510e4dULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::SafetyConfigurationList_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/SafetyConfigurationList";
  }

  static const char* value(const ::kortex_driver::SafetyConfigurationList_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::SafetyConfigurationList_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"SafetyConfiguration[] configuration\n"
"================================================================================\n"
"MSG: kortex_driver/SafetyConfiguration\n"
"\n"
"SafetyHandle handle\n"
"float32 error_threshold\n"
"float32 warning_threshold\n"
"SafetyEnable enable\n"
"================================================================================\n"
"MSG: kortex_driver/SafetyHandle\n"
"\n"
"uint32 identifier\n"
"================================================================================\n"
"MSG: kortex_driver/SafetyEnable\n"
"\n"
"SafetyHandle handle\n"
"bool enable\n"
;
  }

  static const char* value(const ::kortex_driver::SafetyConfigurationList_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::SafetyConfigurationList_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.configuration);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SafetyConfigurationList_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::SafetyConfigurationList_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::SafetyConfigurationList_<ContainerAllocator>& v)
  {
    s << indent << "configuration[]" << std::endl;
    for (size_t i = 0; i < v.configuration.size(); ++i)
    {
      s << indent << "  configuration[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::kortex_driver::SafetyConfiguration_<ContainerAllocator> >::stream(s, indent + "    ", v.configuration[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_SAFETYCONFIGURATIONLIST_H
