#ifndef IMSG_H_
#define IMSG_H_

#include <boost/shared_ptr.hpp>

namespace trgen { namespace msghandl {

class imsg
{
public:
  typedef boost::shared_ptr<imsg> shared_ptr;
  typedef boost::weak_ptr<imsg> weak_ptr;

  virtual void ~imsg()
  {}
};

}}

#endif

