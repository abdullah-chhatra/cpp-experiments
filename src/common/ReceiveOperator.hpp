#ifndef _common_ReceiveOperator_hpp_included_
#define _common_ReceiveOperator_hpp_included_

namespace common
{
  class ReceiveOperator
  {
  public:
      template <class Handler, class Message>
      void operate(Handler& handler, const Message& message)
      {
        handler.receive(message);
      }
  };
}

#endif
