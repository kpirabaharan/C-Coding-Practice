#include <stdio.h>

int main()
{
    long value = 9999L;
    long number = 5555L;
    const long *pvalue = &value; // Value cannot be changed
    // We declared the value the pointer points to cannot be changed
    // But we can change the value, const is only applied to the pointer ***

    // *pvalue = 9000L; Doesn't Work 
    value = 8888L;

    printf("Value is: %li\n", value);

    // We can also change what the pointer is pointing to
    pvalue = &number;

    printf("Value is: %li\n", number);

    // This pointer cannot point to anything else, notice * placement
    long *const pvalue2 = &value;
    printf("Value is: %li\n", *pvalue2);

    // pvalue2 = &number;
    // printf("Value is: %li\n", *pvalue2); // Error

    return 0;
}