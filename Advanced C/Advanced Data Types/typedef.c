#include <stdio.h>
#include <stdlib.h>

typedef int* i_pointer;
 // typedef defines name Counter to be equivalent to int
typedef int Counter;

int main()
{
    i_pointer p; // Same as int*p
    i_pointer a, *b; // Same as int *a, **b
    i_pointer myArray[10]; // same as int *myArray[10];

    Counter x = 0;

    printf("X is: %i\n", x);
    
    return 0;
}  