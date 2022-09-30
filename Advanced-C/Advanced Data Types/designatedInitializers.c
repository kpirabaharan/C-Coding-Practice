#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 0;

    int arr[] = {[4] 29, [5] = 6, [8 ... 11] = 45, [80] = 5};

    int n = sizeof(arr) / sizeof(arr[0]);
    printf("sizeof(arr): %li\n", sizeof(arr));
    printf("Size of Arr: %d\n", n);

    printf("Printing every number in arr: \n");
    for (x = 0; x < n; ++x)
        printf("%i ", arr[x]);
    printf("\n");
    return 0;
}
