#include <string.h>
#include <gtest/gtest.h>

#include <rc4lib/rc4.hpp>

TEST(Rc4Lib, ValidKeyEncryption) {
	int cipherLen;
	unsigned char plainText[] = "hi there";
	unsigned char keyText[] = "123456";
	unsigned char *cipherText = rc4lib::cipher(plainText, 8, keyText, 6);
	unsigned char *plainText2 = rc4lib::cipher(cipherText, 8, keyText, 6);

	EXPECT_TRUE(strcmp((char *)plainText, (char *)plainText2) == 0);
}

TEST(Rc4Lib, InvalidKeyEncryption) {
	int cipherLen;
	unsigned char plainText[] = "hi there";
	unsigned char keyText[] = "123456";
	unsigned char fakeKey[] = "123455";
	unsigned char *cipherText = rc4lib::cipher(plainText, 8, keyText, 6);
	unsigned char *plainText2 = rc4lib::cipher(cipherText, 8, fakeKey, 6);

	EXPECT_FALSE(strcmp((char *)plainText, (char *)plainText2) == 0);
}