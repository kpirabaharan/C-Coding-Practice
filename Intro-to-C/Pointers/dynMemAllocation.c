#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // malloc Allocate memory, parameter = # of bytes
    int *pNumber = (int*)malloc(25*sizeof(int));
    int *const pNumberE = pNumber + 25;
    int i = 1000;
    int *start = pNumber;

    // Example
    for(; pNumber < pNumberE; ++pNumber)
    {
        *pNumber = i;
        ++i;
    }
    pNumber = start;
    for(; pNumber < pNumberE; ++pNumber)
    {
        printf("Value: %d\n", *pNumber);
    }
    pNumber = start;

    // calloc Allocates memory, parameter = # of variables and size of varaible type
    int *pNumber2 = (int*)calloc(75, sizeof(int));

    // realloc enables reuse or extension of previously allocated memory from malloc ior calloc
    // send pointer and new size of bytes
    // reserves content 

    pNumber = (int *)realloc(pNumber, 50); 


    // Release memory
    // Pointer has to point to where malloc was called??? which is '*start'
    free(pNumber);
    pNumber = NULL;

    free(pNumber2);
    pNumber2 = NULL;
    
    return 0;
}