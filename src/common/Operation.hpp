#ifndef _common_Operation_hpp_included_
#define _common_Operation_hpp_included_

namespace common
{
  class TextMessage;
  class VideoMessage;

  class Operation
  {
  public:
    virtual void handle(const TextMessage& message) = 0;

    virtual void handle(const VideoMessage& message) = 0;
  };
}

#endif
