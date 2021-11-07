#include <algorithm>

#include "rc4lib/rc4.hpp"

unsigned char* rc4lib::cipher (unsigned char *text, int textLen, unsigned char *keyText, int keyTextLen) {
    unsigned char S[256];
    unsigned char keyArray[256];
    unsigned char* outputCipher = (unsigned char *)malloc(textLen);

    // Initialize S array
    for (unsigned i = 0; i < 256; i++) S[i] = i;

    // Initialize Key Array
    for (int i = 0; i < 256; i++) keyArray[i] = keyText[i % keyTextLen];

    // Key Scheduling
    for (int i = 0, j = 0; i < 256; i++) {
        j = (j + S[i] + keyArray[i]) % 256;
        std::swap(S[i], S[j]);
    }

    // Pseudo-random generation
    int i = 0,j = 0;

    for (int k = 0; k < textLen; k++) {
        int t;
        unsigned char keyStream;

        i = (i + 1) % 256;
        j = (j + S[i]) % 256;

        std::swap(S[i], S[j]);

        t = (S[j] + S[i]) % 256;
        keyStream = S[t];

        outputCipher[k] = text[k] ^ keyStream;
    }

    return outputCipher;
}