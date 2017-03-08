#include <iostream>
#include "core.h"

int main(int argc, char** argv) {
  if ( argc != 2 ) {
    std::cout << "usage: ./bitcoin-cpp-script <serialized bitcoin script>" << std::endl;
    return 1;
  }

  std::vector<unsigned char> script = hexStringToBytes(argv[1]);

  for (auto i: script)
    std::cout << (int) i << ' ';

  std::cout << std::endl;

  return 0;
}
