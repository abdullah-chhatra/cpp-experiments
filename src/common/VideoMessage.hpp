#ifndef _common_VideoMessage_hpp_included_
#define _common_VideoMessage_hpp_included_

#include "Message.hpp"

namespace common
{
  class VideoMessage : public Message
  {
  public:
    VideoMessage();


    virtual void accept(Operation& operation);
  };
}

#endif
