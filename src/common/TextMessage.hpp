#ifndef _common_TextMessage_hpp_included_
#define _common_TextMessage_hpp_included_

#include "Message.hpp"

namespace common
{
  class TextMessage : public Message
  {
  public:
    TextMessage();

    virtual void accept(Operation& operation);
  };
}

#endif
