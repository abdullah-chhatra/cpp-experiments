#ifndef _common_BaseOperation_hpp_included_
#define _common_BaseOperation_hpp_included_

#include "Operation.hpp"

namespace common
{
  class TextMessageHandler;
  class VideoMessageHandler;

  class BaseOperation : public Operation
  {
  public:
    BaseOperation(
      TextMessageHandler& textMesssageHandler,
      VideoMessageHandler& videoMessageHadler);


  protected:
    TextMessageHandler& textMesssageHandler_;
    VideoMessageHandler& videoMessageHadler_;
  };
}

#endif
