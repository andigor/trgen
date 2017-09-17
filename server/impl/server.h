#ifndef SERVER_H_
#define SERVER_H_

#include "iserver.h"

#include <boost/move/unique_ptr.hpp>

namespace trgen { namespace server {

class server_impl;

class server : public iserver<server_impl>
{
public:
  server();

  void start_accept();
private:
  boost::movelib::unique_ptr<server_impl> impl_;
};

}}

#endif

