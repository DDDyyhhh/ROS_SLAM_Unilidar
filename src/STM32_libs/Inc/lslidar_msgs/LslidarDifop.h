#ifndef _ROS_lslidar_msgs_LslidarDifop_h
#define _ROS_lslidar_msgs_LslidarDifop_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace lslidar_msgs
{

  class LslidarDifop : public ros::Msg
  {
    public:
      typedef int64_t _rpm_type;
      _rpm_type rpm;

    LslidarDifop():
      rpm(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      union {
        int64_t real;
        uint64_t base;
      } u_rpm;
      u_rpm.real = this->rpm;
      *(outbuffer + offset + 0) = (u_rpm.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_rpm.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_rpm.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_rpm.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_rpm.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_rpm.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_rpm.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_rpm.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->rpm);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      union {
        int64_t real;
        uint64_t base;
      } u_rpm;
      u_rpm.base = 0;
      u_rpm.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_rpm.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_rpm.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_rpm.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_rpm.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_rpm.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_rpm.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_rpm.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->rpm = u_rpm.real;
      offset += sizeof(this->rpm);
     return offset;
    }

    virtual const char * getType() override { return "lslidar_msgs/LslidarDifop"; };
    virtual const char * getMD5() override { return "50442aa210dd5f42de9c4e1b86df3045"; };

  };

}
#endif
