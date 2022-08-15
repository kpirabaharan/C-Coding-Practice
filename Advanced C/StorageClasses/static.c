#include <stdio.h>
#include <stdlib.h>

// Cannot be called in another file, ONLY GLOBAL to this file
static int x = 5; 

// Calling static on a fun makes it impossible to be called in another file
static int fun(){
    static int count = 0; // Doesnt get re-init

    count++;
    return count;
}

int main()
{
    printf("%i\n", fun());
    printf("%i\n", fun());
    
    return 0;
}