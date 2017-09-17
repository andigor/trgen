
#ifndef MSGS_H_
#define MSGS_H_

#include "imsg.h"

namespace trgen { namespace msgs {

enum MSG_TYPE {
  MSG_TYPE_NEW_CONNECTION
};


class msg_new_conn : public imsg
{
};
              

} }

#endif

