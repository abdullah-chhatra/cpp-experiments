
#include <iostream>

#include "common/ByteArray.hpp"

int main(int argc, char const *argv[]) {

  std::cout << "Hello World!" << std::endl;

  commmon::ByteArray a(30);
  std::cout << a.size() << std::endl;

  return 0;
}
