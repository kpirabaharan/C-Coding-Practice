#include <stdio.h>
#include <stdlib.h>

// DOESNT WORK CANT BE GLOBAL
// register int x;


int main()
{
    // CANNOT POINT TO REGISTERS AS THEY ARE NOT IN MEMORY
    register int x;
    // int *y = &x;

    for (x=1; x<=15; x++){
        printf("%i\n", x);
    }

    return 0;
}