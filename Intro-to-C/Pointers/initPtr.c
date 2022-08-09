#include <stdio.h>

int main(){
    int x = 10;
    int *px = &x;

    *px = 5;

    printf("Pointer Value: %p\n", px);
    printf("Pointer Dereferenced Value: %i\n", *px);
    printf("Variable Value: %i\n", x);
    printf("Size of Pointer: %li bytes\n", sizeof(px));
    printf("Size of Variable: %li bytes\n", sizeof(x));
    return 0;
}