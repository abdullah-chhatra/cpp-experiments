#ifndef _common_TextMessageHandler_hpp_included_
#define _common_TextMessageHandler_hpp_included_

namespace common
{
  class TextMessage;
  
  class TextMessageHandler
  {
  public:
    TextMessageHandler();

    void receive(const TextMessage& message);

    void send(const TextMessage& message);
  };
}

#endif
