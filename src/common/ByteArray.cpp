#include "ByteArray.hpp"

#include <iostream>

using namespace commmon;

ByteArray::ByteArray(ByteArray::Size size /* = 10U */)
  : _data(new ByteArray::Byte[size]),
    _size(size)
{
  std::cout << "ByteArray: Constructing" << std::endl;
}

ByteArray::~ByteArray()
{
  std::cout << "ByteArray: Destructing" << std::endl;
  delete [] _data;
}
