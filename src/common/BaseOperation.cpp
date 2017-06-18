#include "BaseOperation.hpp"

using namespace common;


BaseOperation::BaseOperation(
  TextMessageHandler& textMesssageHandler,
  VideoMessageHandler& videoMessageHadler)
  : textMesssageHandler_(textMesssageHandler),
    videoMessageHadler_(videoMessageHadler)
{

}
