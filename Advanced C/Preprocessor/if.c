#include <stdio.h>
#include <stdlib.h>

#define MYDEF 5

int main()
{
    #if MYDEF == 4
        printf("Hello\n");
    #else
        printf("Bye\n");
    #endif
    
    return 0;
}