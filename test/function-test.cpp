#include "gtest/gtest.h"
#include "../src/core.h"

std::vector<unsigned char> bytes1 = hexStringToBytes("525393");
std::vector<unsigned char> expected1 = { 82, 83, 147 };

TEST(function, should_pass) {
  EXPECT_EQ(bytes1, expected1);
}
