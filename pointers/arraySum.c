#include <stdio.h>

int arraySum (int *ptr, const int n);

int main()
{
    int values[10] = {3, 7, -9 ,3 ,6 ,-1 ,7, 9, 1, -5};

    printf("The sum is %i\n", arraySum(values, 10));    
    
    return 0;
}

int arraySum (int *ptr, const int n)
{
    int sum = 0;
    int *const arrayEnd = ptr + n;
    // Better way declaration
    int *tempptr = ptr;

    printf("Pointer 1: %p\n", ptr);

    // Standard Convention, however ptr points to end of array after for loop
    // for(; ptr < arrayEnd; ++ptr)
    //     sum += *ptr;

    // To keep ptr pointing to the start, obviously there are other ways
    // for(int *i = ptr; i < arrayEnd; ++i)
    //     sum += *i;

    // Better way
    printf("Temp ptr: %p\n", tempptr);
    for(; ptr < arrayEnd; ++ptr)
        sum += *ptr;
    ptr = tempptr;

    printf("Pointer 2: %p\n", ptr);

    return sum;
}

