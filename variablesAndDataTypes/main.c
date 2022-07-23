#include <stdio.h>
#include <stdbool.h>

int main(){
    int x = 15;
    int y = 0x7CF;

    _Bool z = 0;

    bool flag = true;

    char charvar = 'K';

    // list of identfiers it can be
    enum month {Jan = 1, Feb, March, April, May, June};

    enum month thisMonth;
    thisMonth = March;

    printf("%d %d \n",x, flag);
    printf(flag ? "true" : "false");
    printf("%s", flag?"true":"false");
    printf("\nHecadecimal: %d", y);
    printf("\nChar %c", charvar);

    printf("\nThis month: %i", thisMonth);

    return 0;
}