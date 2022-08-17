#include <stdio.h>
#include <stdlib.h>

// not dynamic length array, just an array with a variable indicating length size

int main()
{
    size_t size = 0;

    printf("Enter the number of elements you want to store:");
    scanf("%zd", &size);

    float values[size];
    
    return 0;
}