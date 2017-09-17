#ifndef IMSGHANDL_H_
#define IMSGHANDL_H_

#include "imsg.h"

#include <boost/shared_ptr.hpp>

namespace trgen { namespace msghandl {

class imsghandl
{
public:
  virtual void request(boost::shared_ptr<imsg> msg) = 0;
protected:
  virtual void process(const imsg& msg) = 0;
};

}}

#endif

