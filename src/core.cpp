#include <vector>
#include <string>
#include <cstdlib>
#include "core.h"

std::vector<unsigned char> hexStringToBytes(const std::string& hex) {
  std::vector<unsigned char> bytes;

  for (unsigned int i = 0; i < hex.length(); i += 2) {
    std::string byteString = hex.substr(i, 2);
    unsigned char byte = (unsigned char) strtol(byteString.c_str(), NULL, 16);
    bytes.push_back(byte);
  }

  return bytes;
}
