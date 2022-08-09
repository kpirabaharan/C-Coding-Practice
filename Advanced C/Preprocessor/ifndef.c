#include <stdio.h>
#include <stdlib.h>

#define JUST_CHECKING // Init to 0
#define LIMIT 4

int main()
{
    int i = 0;
    int total = 0;

    for (i = 1; i <= LIMIT; i++)
    {
        total += 2 * i * i + 1;
        // if JUST_CHECKING is defined it DOESNT PRINT
        #ifndef JUST_CHECKING 
            printf("i=%d, running total = %d\n", i, total);
        #endif
    }

    printf("Grand Total = %d\n", total);

    return 0;
}