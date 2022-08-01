#include <stdio.h>

int main()
{
    int i = 10;
    float f = 2.34;
    char ch = 'k';

    void *vptr; // Type void means we can reference to any data type

    vptr = &i;
    printf("Value of i = %d\n", *(int *)vptr); // We need to cast it to use it tho

    vptr = &f;
    printf("Value of f = %.2f\n", *(float *)vptr);

    vptr = &ch;
    printf("Value of ch = %c\n", *(char *)vptr);
    
    return 0;
}