// Generated by gencpp from file ros_arduino_msgs/ServoWriteRequest.msg
// DO NOT EDIT!


#ifndef ROS_ARDUINO_MSGS_MESSAGE_SERVOWRITEREQUEST_H
#define ROS_ARDUINO_MSGS_MESSAGE_SERVOWRITEREQUEST_H


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
struct ServoWriteRequest_
{
  typedef ServoWriteRequest_<ContainerAllocator> Type;

  ServoWriteRequest_()
    : id(0)
    , value(0.0)  {
    }
  ServoWriteRequest_(const ContainerAllocator& _alloc)
    : id(0)
    , value(0.0)  {
  (void)_alloc;
    }



   typedef uint8_t _id_type;
  _id_type id;

   typedef float _value_type;
  _value_type value;





  typedef boost::shared_ptr< ::ros_arduino_msgs::ServoWriteRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ros_arduino_msgs::ServoWriteRequest_<ContainerAllocator> const> ConstPtr;

}; // struct ServoWriteRequest_

typedef ::ros_arduino_msgs::ServoWriteRequest_<std::allocator<void> > ServoWriteRequest;

typedef boost::shared_ptr< ::ros_arduino_msgs::ServoWriteRequest > ServoWriteRequestPtr;
typedef boost::shared_ptr< ::ros_arduino_msgs::ServoWriteRequest const> ServoWriteRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ros_arduino_msgs::ServoWriteRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ros_arduino_msgs::ServoWriteRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ros_arduino_msgs::ServoWriteRequest_<ContainerAllocator1> & lhs, const ::ros_arduino_msgs::ServoWriteRequest_<ContainerAllocator2> & rhs)
{
  return lhs.id == rhs.id &&
    lhs.value == rhs.value;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ros_arduino_msgs::ServoWriteRequest_<ContainerAllocator1> & lhs, const ::ros_arduino_msgs::ServoWriteRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ros_arduino_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ros_arduino_msgs::ServoWriteRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_arduino_msgs::ServoWriteRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ros_arduino_msgs::ServoWriteRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ros_arduino_msgs::ServoWriteRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_arduino_msgs::ServoWriteRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_arduino_msgs::ServoWriteRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ros_arduino_msgs::ServoWriteRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f90a4a27fdac2d3886d60d19d2b742b2";
  }

  static const char* value(const ::ros_arduino_msgs::ServoWriteRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf90a4a27fdac2d38ULL;
  static const uint64_t static_value2 = 0x86d60d19d2b742b2ULL;
};

template<class ContainerAllocator>
struct DataType< ::ros_arduino_msgs::ServoWriteRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ros_arduino_msgs/ServoWriteRequest";
  }

  static const char* value(const ::ros_arduino_msgs::ServoWriteRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ros_arduino_msgs::ServoWriteRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 id\n"
"float32 value\n"
;
  }

  static const char* value(const ::ros_arduino_msgs::ServoWriteRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ros_arduino_msgs::ServoWriteRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.id);
      stream.next(m.value);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ServoWriteRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ros_arduino_msgs::ServoWriteRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ros_arduino_msgs::ServoWriteRequest_<ContainerAllocator>& v)
  {
    if (false || !indent.empty())
      s << std::endl;
    s << indent << "id: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.id);
    if (true || !indent.empty())
      s << std::endl;
    s << indent << "value: ";
    Printer<float>::stream(s, indent + "  ", v.value);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROS_ARDUINO_MSGS_MESSAGE_SERVOWRITEREQUEST_H
