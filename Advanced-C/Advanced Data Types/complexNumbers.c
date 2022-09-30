#include <stdio.h>
#include <stdlib.h>
#include <complex.h>

int main()
{
    double complex cx = 1.0 + 3.0*I;
    double complex cy = 1.0 - 4.0*I;
    
    printf("Starting values: cx = %.2f%+.2fi cy = %.2f%+.2fi\n", creal(cx), cimag(cx), creal(cy), cimag(cy));
    
    return 0;
}
