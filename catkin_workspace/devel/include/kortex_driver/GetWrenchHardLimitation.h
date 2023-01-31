// Generated by gencpp from file kortex_driver/GetWrenchHardLimitation.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_GETWRENCHHARDLIMITATION_H
#define KORTEX_DRIVER_MESSAGE_GETWRENCHHARDLIMITATION_H

#include <ros/service_traits.h>


#include <kortex_driver/GetWrenchHardLimitationRequest.h>
#include <kortex_driver/GetWrenchHardLimitationResponse.h>


namespace kortex_driver
{

struct GetWrenchHardLimitation
{

typedef GetWrenchHardLimitationRequest Request;
typedef GetWrenchHardLimitationResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetWrenchHardLimitation
} // namespace kortex_driver


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::kortex_driver::GetWrenchHardLimitation > {
  static const char* value()
  {
    return "d1a67d52edbd3c6e07b5922a22648cf3";
  }

  static const char* value(const ::kortex_driver::GetWrenchHardLimitation&) { return value(); }
};

template<>
struct DataType< ::kortex_driver::GetWrenchHardLimitation > {
  static const char* value()
  {
    return "kortex_driver/GetWrenchHardLimitation";
  }

  static const char* value(const ::kortex_driver::GetWrenchHardLimitation&) { return value(); }
};


// service_traits::MD5Sum< ::kortex_driver::GetWrenchHardLimitationRequest> should match
// service_traits::MD5Sum< ::kortex_driver::GetWrenchHardLimitation >
template<>
struct MD5Sum< ::kortex_driver::GetWrenchHardLimitationRequest>
{
  static const char* value()
  {
    return MD5Sum< ::kortex_driver::GetWrenchHardLimitation >::value();
  }
  static const char* value(const ::kortex_driver::GetWrenchHardLimitationRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::kortex_driver::GetWrenchHardLimitationRequest> should match
// service_traits::DataType< ::kortex_driver::GetWrenchHardLimitation >
template<>
struct DataType< ::kortex_driver::GetWrenchHardLimitationRequest>
{
  static const char* value()
  {
    return DataType< ::kortex_driver::GetWrenchHardLimitation >::value();
  }
  static const char* value(const ::kortex_driver::GetWrenchHardLimitationRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::kortex_driver::GetWrenchHardLimitationResponse> should match
// service_traits::MD5Sum< ::kortex_driver::GetWrenchHardLimitation >
template<>
struct MD5Sum< ::kortex_driver::GetWrenchHardLimitationResponse>
{
  static const char* value()
  {
    return MD5Sum< ::kortex_driver::GetWrenchHardLimitation >::value();
  }
  static const char* value(const ::kortex_driver::GetWrenchHardLimitationResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::kortex_driver::GetWrenchHardLimitationResponse> should match
// service_traits::DataType< ::kortex_driver::GetWrenchHardLimitation >
template<>
struct DataType< ::kortex_driver::GetWrenchHardLimitationResponse>
{
  static const char* value()
  {
    return DataType< ::kortex_driver::GetWrenchHardLimitation >::value();
  }
  static const char* value(const ::kortex_driver::GetWrenchHardLimitationResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_GETWRENCHHARDLIMITATION_H
