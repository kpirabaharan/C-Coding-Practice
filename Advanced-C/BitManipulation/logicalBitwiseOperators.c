#include <stdio.h>

int main()
{
    short w1 = 147;
    short w2 = 61;
    short w3 = 0;
    short w4 = 0;
    short w5 = 0;
    short w6 = 0;

    w3 = w1 & w2;
    w4 = w1 | w2;
    w5 = w1 ^ w2;

    // Swap Values
    w1 ^= w2;
    w2 ^= w1;
    w1 ^= w2;

    w6 = ~154;

    printf("%d\n", w3); // AND
    printf("%d\n", w4); // OR
    printf("%d\n", w5); // XOR

    printf("%d\n", w1); // Swap

    printf("%d\n", w6); // twos complement = -155

    return 0;
}