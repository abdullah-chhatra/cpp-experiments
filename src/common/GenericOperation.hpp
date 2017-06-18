#ifndef _common_GenericOperation_hpp_included_
#define _common_GenericOperation_hpp_included_
#include "Operation.hpp"

namespace common
{
  template <class Operator>
  class GenericOperation : public Operation
  {
  public:
    GenericOperation(
      TextMessageHandler& textMesssageHandler,
      VideoMessageHandler& videoMessageHadler)
      : textMesssageHandler_(textMesssageHandler),
        videoMessageHadler_(videoMessageHadler)
    {}

    virtual void handle(const TextMessage& message)
    {
      operator_.operate(textMesssageHandler_, message);
    }

    void handle(const VideoMessage& message)
    {
      operator_.operate(videoMessageHadler_, message);
    }

  protected:
    TextMessageHandler& textMesssageHandler_;
    VideoMessageHandler& videoMessageHadler_;
    Operator operator_;
  };
}

#endif
