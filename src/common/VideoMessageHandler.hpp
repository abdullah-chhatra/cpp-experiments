#ifndef _common_VideoMessageHander_hpp_included_
#define _common_VideoMessageHander_hpp_included_

namespace common
{
  class VideoMessage;

  class VideoMessageHandler
  {
  public:
    VideoMessageHandler();

    void receive(const VideoMessage& message);

    void send(const VideoMessage& message);
  };
}

#endif
