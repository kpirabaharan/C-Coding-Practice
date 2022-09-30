#include <stdio.h>
#include <stdlib.h>

int main()
{
    // auto keyword is the default storage class, it init at the start of fn and popped of call stack at end of fn
    // Don't use auto keyword
    auto int x = 8;

    printf("%i\n", x);
    
    return 0;
}
