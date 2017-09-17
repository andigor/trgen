#ifndef SERVER_H_
#define SERVER_H_

#include "server_interface.h"

#include <boost/move/unique_ptr.hpp>

namespace trgen { namespace server {

class pimpl;

class impl : public interface<impl>
{
public:
  impl();

  void start_accept();
private:
  boost::movelib::unique_ptr<pimpl> pimpl_;
};

}}

#endif

