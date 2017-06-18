
#include <iostream>
#include <memory>

#include "TextMessage.hpp"
#include "VideoMessage.hpp"
#include "TextMessageHandler.hpp"
#include "VideoMessageHandler.hpp"
#include "GenericOperation.hpp"
#include "SendOperator.hpp"
#include "ReceiveOperator.hpp"

using namespace common;

using ReceiveOperation = GenericOperation<ReceiveOperator>;
using SendOperation = GenericOperation<SendOperator>;

class MessageHandler
{
public:
  MessageHandler()
    : textMesssageHandler_(),
      videoMessageHadler_(),
      receiveOperation_(textMesssageHandler_, videoMessageHadler_),
      sendOperation_(textMesssageHandler_, videoMessageHadler_)
  {}

  void receiveMessage(Message& message)
  {
    message.accept(receiveOperation_);
  }

  void sendMessage(Message& message)
  {
    message.accept(sendOperation_);
  }

private:
  TextMessageHandler textMesssageHandler_;
  VideoMessageHandler videoMessageHadler_;
  ReceiveOperation receiveOperation_;
  SendOperation sendOperation_;
};

int main(int argc, char const *argv[]) {

  MessageHandler handler;

  Message* textMessage = new TextMessage();
  handler.sendMessage(*textMessage);
  handler.receiveMessage(*textMessage);

  VideoMessage* videoMessage = new VideoMessage();
  handler.sendMessage(*videoMessage);
  handler.receiveMessage(*videoMessage);

  delete textMessage;
  delete videoMessage;

  return 0;
}
