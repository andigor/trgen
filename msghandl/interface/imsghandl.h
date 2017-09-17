#ifndef IMSGHANDL_H_
#define IMSGHANDL_H_

#include "imsg.h"

#include <boost/shared_ptr.hpp>

namespace trgen { namespace msghandl {

class imsghandl
{
public:
  typedef boost::shared_ptr<imsghandl> shared_ptr;
  typedef boost::weak_ptr<imsghandl> weak_ptr;

  virtual void request(shared_ptr msg) = 0;
protected:
  virtual void process(const imsg& msg) = 0;
};

}}

#endif

