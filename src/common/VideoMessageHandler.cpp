#include "VideoMessageHandler.hpp"
#include "VideoMessage.hpp"

#include <iostream>

using namespace common;

VideoMessageHandler::VideoMessageHandler()
{

}

void VideoMessageHandler::receive(const VideoMessage& message)
{
    std::cout << "Receiving video message" << std::endl;
}

void VideoMessageHandler::send(const VideoMessage& message)
{
  std::cout << "Sending video message" << std::endl;
}
