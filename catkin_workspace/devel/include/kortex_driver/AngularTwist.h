// Generated by gencpp from file kortex_driver/AngularTwist.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_ANGULARTWIST_H
#define KORTEX_DRIVER_MESSAGE_ANGULARTWIST_H


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
struct AngularTwist_
{
  typedef AngularTwist_<ContainerAllocator> Type;

  AngularTwist_()
    : angular(0.0)  {
    }
  AngularTwist_(const ContainerAllocator& _alloc)
    : angular(0.0)  {
  (void)_alloc;
    }



   typedef float _angular_type;
  _angular_type angular;





  typedef boost::shared_ptr< ::kortex_driver::AngularTwist_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::AngularTwist_<ContainerAllocator> const> ConstPtr;

}; // struct AngularTwist_

typedef ::kortex_driver::AngularTwist_<std::allocator<void> > AngularTwist;

typedef boost::shared_ptr< ::kortex_driver::AngularTwist > AngularTwistPtr;
typedef boost::shared_ptr< ::kortex_driver::AngularTwist const> AngularTwistConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::AngularTwist_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::AngularTwist_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::AngularTwist_<ContainerAllocator1> & lhs, const ::kortex_driver::AngularTwist_<ContainerAllocator2> & rhs)
{
  return lhs.angular == rhs.angular;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::AngularTwist_<ContainerAllocator1> & lhs, const ::kortex_driver::AngularTwist_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::AngularTwist_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::AngularTwist_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::AngularTwist_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::AngularTwist_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::AngularTwist_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::AngularTwist_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::AngularTwist_<ContainerAllocator> >
{
  static const char* value()
  {
    return "960aa4f2aaeac14706e7fa1a905e8a00";
  }

  static const char* value(const ::kortex_driver::AngularTwist_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x960aa4f2aaeac147ULL;
  static const uint64_t static_value2 = 0x06e7fa1a905e8a00ULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::AngularTwist_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/AngularTwist";
  }

  static const char* value(const ::kortex_driver::AngularTwist_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::AngularTwist_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"float32 angular\n"
;
  }

  static const char* value(const ::kortex_driver::AngularTwist_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::AngularTwist_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.angular);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct AngularTwist_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::AngularTwist_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::AngularTwist_<ContainerAllocator>& v)
  {
    s << indent << "angular: ";
    Printer<float>::stream(s, indent + "  ", v.angular);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_ANGULARTWIST_H
