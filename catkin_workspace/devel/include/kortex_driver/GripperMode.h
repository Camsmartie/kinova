// Generated by gencpp from file kortex_driver/GripperMode.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_GRIPPERMODE_H
#define KORTEX_DRIVER_MESSAGE_GRIPPERMODE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace kortex_driver
{
template <class ContainerAllocator>
struct GripperMode_
{
  typedef GripperMode_<ContainerAllocator> Type;

  GripperMode_()
    {
    }
  GripperMode_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }





// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(UNSPECIFIED_GRIPPER_MODE)
  #undef UNSPECIFIED_GRIPPER_MODE
#endif
#if defined(_WIN32) && defined(GRIPPER_FORCE)
  #undef GRIPPER_FORCE
#endif
#if defined(_WIN32) && defined(GRIPPER_SPEED)
  #undef GRIPPER_SPEED
#endif
#if defined(_WIN32) && defined(GRIPPER_POSITION)
  #undef GRIPPER_POSITION
#endif

  enum {
    UNSPECIFIED_GRIPPER_MODE = 0u,
    GRIPPER_FORCE = 1u,
    GRIPPER_SPEED = 2u,
    GRIPPER_POSITION = 3u,
  };


  typedef boost::shared_ptr< ::kortex_driver::GripperMode_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::GripperMode_<ContainerAllocator> const> ConstPtr;

}; // struct GripperMode_

typedef ::kortex_driver::GripperMode_<std::allocator<void> > GripperMode;

typedef boost::shared_ptr< ::kortex_driver::GripperMode > GripperModePtr;
typedef boost::shared_ptr< ::kortex_driver::GripperMode const> GripperModeConstPtr;

// constants requiring out of line definition

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::GripperMode_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::GripperMode_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::GripperMode_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::GripperMode_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::GripperMode_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::GripperMode_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::GripperMode_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::GripperMode_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::GripperMode_<ContainerAllocator> >
{
  static const char* value()
  {
    return "91237e67935408a1b67c1d3e83f53d6b";
  }

  static const char* value(const ::kortex_driver::GripperMode_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x91237e67935408a1ULL;
  static const uint64_t static_value2 = 0xb67c1d3e83f53d6bULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::GripperMode_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/GripperMode";
  }

  static const char* value(const ::kortex_driver::GripperMode_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::GripperMode_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"uint32 UNSPECIFIED_GRIPPER_MODE = 0\n"
"\n"
"uint32 GRIPPER_FORCE = 1\n"
"\n"
"uint32 GRIPPER_SPEED = 2\n"
"\n"
"uint32 GRIPPER_POSITION = 3\n"
;
  }

  static const char* value(const ::kortex_driver::GripperMode_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::GripperMode_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GripperMode_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::GripperMode_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::kortex_driver::GripperMode_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_GRIPPERMODE_H
