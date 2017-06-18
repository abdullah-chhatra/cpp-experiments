
#include "VideoMessage.hpp"
#include "Operation.hpp"

using namespace common;

VideoMessage::VideoMessage()
{}

void VideoMessage::accept(Operation& operation)
{
  operation.handle(*this);
}
