
#include "TextMessage.hpp"
#include "Operation.hpp"

using namespace common;

TextMessage::TextMessage()
{

}

void TextMessage::accept(Operation& operation)
{
  operation.handle(*this);
}
