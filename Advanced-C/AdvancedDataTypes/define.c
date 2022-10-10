#include <stdio.h>
#include <stdlib.h>

// defines are good where you want to check/replace data like a gameover variable
// const are good when u are just using consts sparringly like you would pi
// #define name is in CAPS with _
#define YES 1

int main()
{   
    int gameOver = YES;

    printf("Game Over: %i\n", gameOver);
    
    return 0;
}