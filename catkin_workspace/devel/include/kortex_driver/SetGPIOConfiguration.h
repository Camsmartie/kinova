// Generated by gencpp from file kortex_driver/SetGPIOConfiguration.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_SETGPIOCONFIGURATION_H
#define KORTEX_DRIVER_MESSAGE_SETGPIOCONFIGURATION_H

#include <ros/service_traits.h>


#include <kortex_driver/SetGPIOConfigurationRequest.h>
#include <kortex_driver/SetGPIOConfigurationResponse.h>


namespace kortex_driver
{

struct SetGPIOConfiguration
{

typedef SetGPIOConfigurationRequest Request;
typedef SetGPIOConfigurationResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetGPIOConfiguration
} // namespace kortex_driver


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::kortex_driver::SetGPIOConfiguration > {
  static const char* value()
  {
    return "c67d61eec82191ca0955210766f4f427";
  }

  static const char* value(const ::kortex_driver::SetGPIOConfiguration&) { return value(); }
};

template<>
struct DataType< ::kortex_driver::SetGPIOConfiguration > {
  static const char* value()
  {
    return "kortex_driver/SetGPIOConfiguration";
  }

  static const char* value(const ::kortex_driver::SetGPIOConfiguration&) { return value(); }
};


// service_traits::MD5Sum< ::kortex_driver::SetGPIOConfigurationRequest> should match
// service_traits::MD5Sum< ::kortex_driver::SetGPIOConfiguration >
template<>
struct MD5Sum< ::kortex_driver::SetGPIOConfigurationRequest>
{
  static const char* value()
  {
    return MD5Sum< ::kortex_driver::SetGPIOConfiguration >::value();
  }
  static const char* value(const ::kortex_driver::SetGPIOConfigurationRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::kortex_driver::SetGPIOConfigurationRequest> should match
// service_traits::DataType< ::kortex_driver::SetGPIOConfiguration >
template<>
struct DataType< ::kortex_driver::SetGPIOConfigurationRequest>
{
  static const char* value()
  {
    return DataType< ::kortex_driver::SetGPIOConfiguration >::value();
  }
  static const char* value(const ::kortex_driver::SetGPIOConfigurationRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::kortex_driver::SetGPIOConfigurationResponse> should match
// service_traits::MD5Sum< ::kortex_driver::SetGPIOConfiguration >
template<>
struct MD5Sum< ::kortex_driver::SetGPIOConfigurationResponse>
{
  static const char* value()
  {
    return MD5Sum< ::kortex_driver::SetGPIOConfiguration >::value();
  }
  static const char* value(const ::kortex_driver::SetGPIOConfigurationResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::kortex_driver::SetGPIOConfigurationResponse> should match
// service_traits::DataType< ::kortex_driver::SetGPIOConfiguration >
template<>
struct DataType< ::kortex_driver::SetGPIOConfigurationResponse>
{
  static const char* value()
  {
    return DataType< ::kortex_driver::SetGPIOConfiguration >::value();
  }
  static const char* value(const ::kortex_driver::SetGPIOConfigurationResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_SETGPIOCONFIGURATION_H
