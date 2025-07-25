// Generated by gencpp from file ros_arduino_msgs/ServoReadResponse.msg
// DO NOT EDIT!


#ifndef ROS_ARDUINO_MSGS_MESSAGE_SERVOREADRESPONSE_H
#define ROS_ARDUINO_MSGS_MESSAGE_SERVOREADRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ros_arduino_msgs
{
template <class ContainerAllocator>
struct ServoReadResponse_
{
  typedef ServoReadResponse_<ContainerAllocator> Type;

  ServoReadResponse_()
    : value(0.0)  {
    }
  ServoReadResponse_(const ContainerAllocator& _alloc)
    : value(0.0)  {
  (void)_alloc;
    }



   typedef float _value_type;
  _value_type value;





  typedef boost::shared_ptr< ::ros_arduino_msgs::ServoReadResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ros_arduino_msgs::ServoReadResponse_<ContainerAllocator> const> ConstPtr;

}; // struct ServoReadResponse_

typedef ::ros_arduino_msgs::ServoReadResponse_<std::allocator<void> > ServoReadResponse;

typedef boost::shared_ptr< ::ros_arduino_msgs::ServoReadResponse > ServoReadResponsePtr;
typedef boost::shared_ptr< ::ros_arduino_msgs::ServoReadResponse const> ServoReadResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ros_arduino_msgs::ServoReadResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ros_arduino_msgs::ServoReadResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ros_arduino_msgs::ServoReadResponse_<ContainerAllocator1> & lhs, const ::ros_arduino_msgs::ServoReadResponse_<ContainerAllocator2> & rhs)
{
  return lhs.value == rhs.value;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ros_arduino_msgs::ServoReadResponse_<ContainerAllocator1> & lhs, const ::ros_arduino_msgs::ServoReadResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ros_arduino_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ros_arduino_msgs::ServoReadResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_arduino_msgs::ServoReadResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ros_arduino_msgs::ServoReadResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ros_arduino_msgs::ServoReadResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_arduino_msgs::ServoReadResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_arduino_msgs::ServoReadResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ros_arduino_msgs::ServoReadResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0aca93dcf6d857f0e5a0dc6be1eaa9fb";
  }

  static const char* value(const ::ros_arduino_msgs::ServoReadResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0aca93dcf6d857f0ULL;
  static const uint64_t static_value2 = 0xe5a0dc6be1eaa9fbULL;
};

template<class ContainerAllocator>
struct DataType< ::ros_arduino_msgs::ServoReadResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ros_arduino_msgs/ServoReadResponse";
  }

  static const char* value(const ::ros_arduino_msgs::ServoReadResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ros_arduino_msgs::ServoReadResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 value\n"
"\n"
;
  }

  static const char* value(const ::ros_arduino_msgs::ServoReadResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ros_arduino_msgs::ServoReadResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.value);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ServoReadResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ros_arduino_msgs::ServoReadResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ros_arduino_msgs::ServoReadResponse_<ContainerAllocator>& v)
  {
    if (false || !indent.empty())
      s << std::endl;
    s << indent << "value: ";
    Printer<float>::stream(s, indent + "  ", v.value);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROS_ARDUINO_MSGS_MESSAGE_SERVOREADRESPONSE_H
