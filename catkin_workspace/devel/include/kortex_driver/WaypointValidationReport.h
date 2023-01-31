// Generated by gencpp from file kortex_driver/WaypointValidationReport.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_WAYPOINTVALIDATIONREPORT_H
#define KORTEX_DRIVER_MESSAGE_WAYPOINTVALIDATIONREPORT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/TrajectoryErrorReport.h>
#include <kortex_driver/WaypointList.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct WaypointValidationReport_
{
  typedef WaypointValidationReport_<ContainerAllocator> Type;

  WaypointValidationReport_()
    : trajectory_error_report()
    , optimal_waypoint_list()  {
    }
  WaypointValidationReport_(const ContainerAllocator& _alloc)
    : trajectory_error_report(_alloc)
    , optimal_waypoint_list(_alloc)  {
  (void)_alloc;
    }



   typedef  ::kortex_driver::TrajectoryErrorReport_<ContainerAllocator>  _trajectory_error_report_type;
  _trajectory_error_report_type trajectory_error_report;

   typedef  ::kortex_driver::WaypointList_<ContainerAllocator>  _optimal_waypoint_list_type;
  _optimal_waypoint_list_type optimal_waypoint_list;





  typedef boost::shared_ptr< ::kortex_driver::WaypointValidationReport_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::WaypointValidationReport_<ContainerAllocator> const> ConstPtr;

}; // struct WaypointValidationReport_

typedef ::kortex_driver::WaypointValidationReport_<std::allocator<void> > WaypointValidationReport;

typedef boost::shared_ptr< ::kortex_driver::WaypointValidationReport > WaypointValidationReportPtr;
typedef boost::shared_ptr< ::kortex_driver::WaypointValidationReport const> WaypointValidationReportConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::WaypointValidationReport_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::WaypointValidationReport_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::WaypointValidationReport_<ContainerAllocator1> & lhs, const ::kortex_driver::WaypointValidationReport_<ContainerAllocator2> & rhs)
{
  return lhs.trajectory_error_report == rhs.trajectory_error_report &&
    lhs.optimal_waypoint_list == rhs.optimal_waypoint_list;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::WaypointValidationReport_<ContainerAllocator1> & lhs, const ::kortex_driver::WaypointValidationReport_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::WaypointValidationReport_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::WaypointValidationReport_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::WaypointValidationReport_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::WaypointValidationReport_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::WaypointValidationReport_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::WaypointValidationReport_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::WaypointValidationReport_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a7dd565ec93d4c9c5950e62db23f8114";
  }

  static const char* value(const ::kortex_driver::WaypointValidationReport_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa7dd565ec93d4c9cULL;
  static const uint64_t static_value2 = 0x5950e62db23f8114ULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::WaypointValidationReport_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/WaypointValidationReport";
  }

  static const char* value(const ::kortex_driver::WaypointValidationReport_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::WaypointValidationReport_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"TrajectoryErrorReport trajectory_error_report\n"
"WaypointList optimal_waypoint_list\n"
"================================================================================\n"
"MSG: kortex_driver/TrajectoryErrorReport\n"
"\n"
"TrajectoryErrorElement[] trajectory_error_elements\n"
"================================================================================\n"
"MSG: kortex_driver/TrajectoryErrorElement\n"
"\n"
"uint32 error_type\n"
"uint32 error_identifier\n"
"float32 error_value\n"
"float32 min_value\n"
"float32 max_value\n"
"uint32 index\n"
"string message\n"
"uint32 waypoint_index\n"
"================================================================================\n"
"MSG: kortex_driver/WaypointList\n"
"\n"
"Waypoint[] waypoints\n"
"float32 duration\n"
"bool use_optimal_blending\n"
"================================================================================\n"
"MSG: kortex_driver/Waypoint\n"
"\n"
"string name\n"
"Waypoint_type_of_waypoint oneof_type_of_waypoint\n"
"================================================================================\n"
"MSG: kortex_driver/Waypoint_type_of_waypoint\n"
"\n"
"AngularWaypoint[] angular_waypoint\n"
"CartesianWaypoint[] cartesian_waypoint\n"
"================================================================================\n"
"MSG: kortex_driver/AngularWaypoint\n"
"\n"
"float32[] angles\n"
"float32[] maximum_velocities\n"
"float32 duration\n"
"================================================================================\n"
"MSG: kortex_driver/CartesianWaypoint\n"
"\n"
"Pose pose\n"
"uint32 reference_frame\n"
"float32 maximum_linear_velocity\n"
"float32 maximum_angular_velocity\n"
"float32 blending_radius\n"
"================================================================================\n"
"MSG: kortex_driver/Pose\n"
"\n"
"float32 x\n"
"float32 y\n"
"float32 z\n"
"float32 theta_x\n"
"float32 theta_y\n"
"float32 theta_z\n"
;
  }

  static const char* value(const ::kortex_driver::WaypointValidationReport_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::WaypointValidationReport_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.trajectory_error_report);
      stream.next(m.optimal_waypoint_list);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct WaypointValidationReport_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::WaypointValidationReport_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::WaypointValidationReport_<ContainerAllocator>& v)
  {
    s << indent << "trajectory_error_report: ";
    s << std::endl;
    Printer< ::kortex_driver::TrajectoryErrorReport_<ContainerAllocator> >::stream(s, indent + "  ", v.trajectory_error_report);
    s << indent << "optimal_waypoint_list: ";
    s << std::endl;
    Printer< ::kortex_driver::WaypointList_<ContainerAllocator> >::stream(s, indent + "  ", v.optimal_waypoint_list);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_WAYPOINTVALIDATIONREPORT_H
