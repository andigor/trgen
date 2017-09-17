#include "server.h"


namespace trgen { namespace server {

class server_impl
{
public:
  void start_accept()
  {
  }
private:
};

server::server()
     :impl_(new server_impl())
{
}

void server::start_accept()
{
  impl_->start_accept();
}

}} 

