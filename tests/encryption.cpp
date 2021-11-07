// #include <gtest/gtest.h>
#include <gtest/gtest.h>

#include <rc4lib/rc4.hpp>

TEST(Rc4Lib, ValidEncryption) {
  EXPECT_EQ(encrypt(), 55);
}