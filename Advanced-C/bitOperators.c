#include <stdio.h>

#define BYTE_TO_BINARY_PATTERN "%c%c%c%c%c%c%c%c"
#define BYTE_TO_BINARY(byte)  \
  (byte & 0x80 ? '1' : '0'), \
  (byte & 0x40 ? '1' : '0'), \
  (byte & 0x20 ? '1' : '0'), \
  (byte & 0x10 ? '1' : '0'), \
  (byte & 0x08 ? '1' : '0'), \
  (byte & 0x04 ? '1' : '0'), \
  (byte & 0x02 ? '1' : '0'), \
  (byte & 0x01 ? '1' : '0')

int main(){
  
    int x = 0b1010;
    int y = 0b0100;

    int z = x & y;

    if(x&y)
        printf("Print was run!");

    printf("\nNumber is: "BYTE_TO_BINARY_PATTERN, BYTE_TO_BINARY(z));
    return 0;
}
