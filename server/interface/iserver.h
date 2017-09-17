#ifndef SERVER_INTERFACE_H_
#define SERVER_INTERFACE_H_
namespace trgen { namespace server {

template<class Derived>
class iserver
{
public:
  void start_accept()
  {
    Derived::start_accept();
  }
private:
  void handle_accept()
  {
  }
};

}}

#endif
