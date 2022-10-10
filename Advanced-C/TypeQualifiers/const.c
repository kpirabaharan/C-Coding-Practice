#include <stdio.h>

int main(){
    
    const float f; // 1 constant float, cannot be changed
    
    const float * pf; // 2 pf points to a constant float value

    float const * pfc; // 2 same as const float *pfc

    float * const pt; // 3 ptr is a const pointer

    const float * const ptr; // 4 const pointer points to a const float

    return 0;
}

void display (const int array[], int limit); // Means the value pointer is pointing to cannot change
