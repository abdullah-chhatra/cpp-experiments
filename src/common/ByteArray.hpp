#ifndef _common_ByteArray_hpp_included_
#define _common_ByteArray_hpp_included_

#include <cstdint>

namespace common
{
  class ByteArray
  {
    typedef unsigned char Byte;
    typedef Byte* Bytes;
    typedef std::uint32_t Size;

  public:
    ByteArray(Size size = 10U);

    ~ByteArray();

    Size size()
    { return _size; }

    const Bytes data()
    { return _data; }

    operator const Bytes()
    { return _data; }

  private:
    Bytes _data;
    Size  _size;
  };
}

#endif
