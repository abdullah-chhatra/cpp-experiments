#include "TextMessageHandler.hpp"
#include "TextMessage.hpp"

#include <iostream>

using namespace common;

TextMessageHandler::TextMessageHandler()
{

}

void TextMessageHandler::receive(const TextMessage& message)
{
    std::cout << "Receiving text message" << std::endl;
}

void TextMessageHandler::send(const TextMessage& message)
{
  std::cout << "Sending text message" << std::endl;
}
