# include <stdio.h>

void printSomething(int num);

int main()
{
    int x = 10;
    printSomething(x);
    return 0;
}

void printSomething(int num)
{
    printf("Number %d\n", num);
}
