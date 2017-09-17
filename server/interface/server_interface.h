#ifndef SERVER_INTERFACE_H_
#define SERVER_INTERFACE_H_
namespace trgen { namespace server {

template<class Derived>
class interface
{
public:
  void start_accept()
  {
    Derived::start_accept();
  }
};

}}

#endif
