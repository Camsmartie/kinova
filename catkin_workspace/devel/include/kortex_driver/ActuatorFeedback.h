// Generated by gencpp from file kortex_driver/ActuatorFeedback.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_ACTUATORFEEDBACK_H
#define KORTEX_DRIVER_MESSAGE_ACTUATORFEEDBACK_H


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
struct ActuatorFeedback_
{
  typedef ActuatorFeedback_<ContainerAllocator> Type;

  ActuatorFeedback_()
    : command_id(0)
    , status_flags(0)
    , jitter_comm(0)
    , position(0.0)
    , velocity(0.0)
    , torque(0.0)
    , current_motor(0.0)
    , voltage(0.0)
    , temperature_motor(0.0)
    , temperature_core(0.0)
    , fault_bank_a(0)
    , fault_bank_b(0)
    , warning_bank_a(0)
    , warning_bank_b(0)  {
    }
  ActuatorFeedback_(const ContainerAllocator& _alloc)
    : command_id(0)
    , status_flags(0)
    , jitter_comm(0)
    , position(0.0)
    , velocity(0.0)
    , torque(0.0)
    , current_motor(0.0)
    , voltage(0.0)
    , temperature_motor(0.0)
    , temperature_core(0.0)
    , fault_bank_a(0)
    , fault_bank_b(0)
    , warning_bank_a(0)
    , warning_bank_b(0)  {
  (void)_alloc;
    }



   typedef uint32_t _command_id_type;
  _command_id_type command_id;

   typedef uint32_t _status_flags_type;
  _status_flags_type status_flags;

   typedef uint32_t _jitter_comm_type;
  _jitter_comm_type jitter_comm;

   typedef float _position_type;
  _position_type position;

   typedef float _velocity_type;
  _velocity_type velocity;

   typedef float _torque_type;
  _torque_type torque;

   typedef float _current_motor_type;
  _current_motor_type current_motor;

   typedef float _voltage_type;
  _voltage_type voltage;

   typedef float _temperature_motor_type;
  _temperature_motor_type temperature_motor;

   typedef float _temperature_core_type;
  _temperature_core_type temperature_core;

   typedef uint32_t _fault_bank_a_type;
  _fault_bank_a_type fault_bank_a;

   typedef uint32_t _fault_bank_b_type;
  _fault_bank_b_type fault_bank_b;

   typedef uint32_t _warning_bank_a_type;
  _warning_bank_a_type warning_bank_a;

   typedef uint32_t _warning_bank_b_type;
  _warning_bank_b_type warning_bank_b;





  typedef boost::shared_ptr< ::kortex_driver::ActuatorFeedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::ActuatorFeedback_<ContainerAllocator> const> ConstPtr;

}; // struct ActuatorFeedback_

typedef ::kortex_driver::ActuatorFeedback_<std::allocator<void> > ActuatorFeedback;

typedef boost::shared_ptr< ::kortex_driver::ActuatorFeedback > ActuatorFeedbackPtr;
typedef boost::shared_ptr< ::kortex_driver::ActuatorFeedback const> ActuatorFeedbackConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::ActuatorFeedback_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::ActuatorFeedback_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::ActuatorFeedback_<ContainerAllocator1> & lhs, const ::kortex_driver::ActuatorFeedback_<ContainerAllocator2> & rhs)
{
  return lhs.command_id == rhs.command_id &&
    lhs.status_flags == rhs.status_flags &&
    lhs.jitter_comm == rhs.jitter_comm &&
    lhs.position == rhs.position &&
    lhs.velocity == rhs.velocity &&
    lhs.torque == rhs.torque &&
    lhs.current_motor == rhs.current_motor &&
    lhs.voltage == rhs.voltage &&
    lhs.temperature_motor == rhs.temperature_motor &&
    lhs.temperature_core == rhs.temperature_core &&
    lhs.fault_bank_a == rhs.fault_bank_a &&
    lhs.fault_bank_b == rhs.fault_bank_b &&
    lhs.warning_bank_a == rhs.warning_bank_a &&
    lhs.warning_bank_b == rhs.warning_bank_b;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::ActuatorFeedback_<ContainerAllocator1> & lhs, const ::kortex_driver::ActuatorFeedback_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::ActuatorFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::ActuatorFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::ActuatorFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::ActuatorFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::ActuatorFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::ActuatorFeedback_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::ActuatorFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1c44a9029e2d1e74ae3d04b3c212afbd";
  }

  static const char* value(const ::kortex_driver::ActuatorFeedback_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1c44a9029e2d1e74ULL;
  static const uint64_t static_value2 = 0xae3d04b3c212afbdULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::ActuatorFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/ActuatorFeedback";
  }

  static const char* value(const ::kortex_driver::ActuatorFeedback_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::ActuatorFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"uint32 command_id\n"
"uint32 status_flags\n"
"uint32 jitter_comm\n"
"float32 position\n"
"float32 velocity\n"
"float32 torque\n"
"float32 current_motor\n"
"float32 voltage\n"
"float32 temperature_motor\n"
"float32 temperature_core\n"
"uint32 fault_bank_a\n"
"uint32 fault_bank_b\n"
"uint32 warning_bank_a\n"
"uint32 warning_bank_b\n"
;
  }

  static const char* value(const ::kortex_driver::ActuatorFeedback_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::ActuatorFeedback_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.command_id);
      stream.next(m.status_flags);
      stream.next(m.jitter_comm);
      stream.next(m.position);
      stream.next(m.velocity);
      stream.next(m.torque);
      stream.next(m.current_motor);
      stream.next(m.voltage);
      stream.next(m.temperature_motor);
      stream.next(m.temperature_core);
      stream.next(m.fault_bank_a);
      stream.next(m.fault_bank_b);
      stream.next(m.warning_bank_a);
      stream.next(m.warning_bank_b);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ActuatorFeedback_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::ActuatorFeedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::ActuatorFeedback_<ContainerAllocator>& v)
  {
    s << indent << "command_id: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.command_id);
    s << indent << "status_flags: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.status_flags);
    s << indent << "jitter_comm: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.jitter_comm);
    s << indent << "position: ";
    Printer<float>::stream(s, indent + "  ", v.position);
    s << indent << "velocity: ";
    Printer<float>::stream(s, indent + "  ", v.velocity);
    s << indent << "torque: ";
    Printer<float>::stream(s, indent + "  ", v.torque);
    s << indent << "current_motor: ";
    Printer<float>::stream(s, indent + "  ", v.current_motor);
    s << indent << "voltage: ";
    Printer<float>::stream(s, indent + "  ", v.voltage);
    s << indent << "temperature_motor: ";
    Printer<float>::stream(s, indent + "  ", v.temperature_motor);
    s << indent << "temperature_core: ";
    Printer<float>::stream(s, indent + "  ", v.temperature_core);
    s << indent << "fault_bank_a: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.fault_bank_a);
    s << indent << "fault_bank_b: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.fault_bank_b);
    s << indent << "warning_bank_a: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.warning_bank_a);
    s << indent << "warning_bank_b: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.warning_bank_b);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_ACTUATORFEEDBACK_H
