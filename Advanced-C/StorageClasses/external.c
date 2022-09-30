#include <stdio.h>
#include <stdlib.h>
#include "foo.c"

int i = 5;

char text[255];

// extern void foo(); // not working idk why

int main(void)
{
    printf("%i\n", i);
    foo();
    printf("%i\n", i);
    
    return 0;
}