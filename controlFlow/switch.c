#include <stdio.h>

int main(){

    int x;

    printf("Enter a value: ");
    scanf("%d", &x);

    switch (x)
    {
        case 0:
            printf("Your number is zero.\n");
            break;
        default:
            printf("Value is non-zero.\n");
            break;
    }
}