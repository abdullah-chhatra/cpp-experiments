#ifndef _common_Message_hpp_included_
#define _common_Message_hpp_included_

namespace common
{
  class Operation;

  class Message
  {
  public:
    Message();

    virtual ~Message();
    
    virtual void accept(Operation& operation) = 0;
  };
}

#endif
