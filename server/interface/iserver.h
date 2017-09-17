#ifndef SERVER_INTERFACE_H_
#define SERVER_INTERFACE_H_

#include "imsghandl.h"
#include "imsg.h"

namespace trgen { namespace server {

class iserver
{
public:
  virtual void publish(msghandl::imsghandl::weak_ptr handl, 
                       uint16_t port) = 0;

  virtual void unpublish(msghandl::imsghandl::weak_ptr) = 0;
};

}}

#endif

