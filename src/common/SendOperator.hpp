#ifndef _common_SendOperator_hpp_included_
#define _common_SendOperator_hpp_included_

namespace common
{
  class SendOperator
  {
  public:
      template <class Handler, class Message>
      void operate(Handler& handler, const Message& message)
      {
        handler.send(message);
      }
  };
}

#endif
