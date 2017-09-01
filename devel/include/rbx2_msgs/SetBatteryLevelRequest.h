// Generated by gencpp from file rbx2_msgs/SetBatteryLevelRequest.msg
// DO NOT EDIT!


#ifndef RBX2_MSGS_MESSAGE_SETBATTERYLEVELREQUEST_H
#define RBX2_MSGS_MESSAGE_SETBATTERYLEVELREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace rbx2_msgs
{
template <class ContainerAllocator>
struct SetBatteryLevelRequest_
{
  typedef SetBatteryLevelRequest_<ContainerAllocator> Type;

  SetBatteryLevelRequest_()
    : value(0.0)  {
    }
  SetBatteryLevelRequest_(const ContainerAllocator& _alloc)
    : value(0.0)  {
  (void)_alloc;
    }



   typedef float _value_type;
  _value_type value;




  typedef boost::shared_ptr< ::rbx2_msgs::SetBatteryLevelRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rbx2_msgs::SetBatteryLevelRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetBatteryLevelRequest_

typedef ::rbx2_msgs::SetBatteryLevelRequest_<std::allocator<void> > SetBatteryLevelRequest;

typedef boost::shared_ptr< ::rbx2_msgs::SetBatteryLevelRequest > SetBatteryLevelRequestPtr;
typedef boost::shared_ptr< ::rbx2_msgs::SetBatteryLevelRequest const> SetBatteryLevelRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rbx2_msgs::SetBatteryLevelRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rbx2_msgs::SetBatteryLevelRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace rbx2_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::rbx2_msgs::SetBatteryLevelRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rbx2_msgs::SetBatteryLevelRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rbx2_msgs::SetBatteryLevelRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rbx2_msgs::SetBatteryLevelRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rbx2_msgs::SetBatteryLevelRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rbx2_msgs::SetBatteryLevelRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rbx2_msgs::SetBatteryLevelRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0aca93dcf6d857f0e5a0dc6be1eaa9fb";
  }

  static const char* value(const ::rbx2_msgs::SetBatteryLevelRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0aca93dcf6d857f0ULL;
  static const uint64_t static_value2 = 0xe5a0dc6be1eaa9fbULL;
};

template<class ContainerAllocator>
struct DataType< ::rbx2_msgs::SetBatteryLevelRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rbx2_msgs/SetBatteryLevelRequest";
  }

  static const char* value(const ::rbx2_msgs::SetBatteryLevelRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rbx2_msgs::SetBatteryLevelRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 value\n\
";
  }

  static const char* value(const ::rbx2_msgs::SetBatteryLevelRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rbx2_msgs::SetBatteryLevelRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.value);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetBatteryLevelRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rbx2_msgs::SetBatteryLevelRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rbx2_msgs::SetBatteryLevelRequest_<ContainerAllocator>& v)
  {
    s << indent << "value: ";
    Printer<float>::stream(s, indent + "  ", v.value);
  }
};

} // namespace message_operations
} // namespace ros

#endif // RBX2_MSGS_MESSAGE_SETBATTERYLEVELREQUEST_H
