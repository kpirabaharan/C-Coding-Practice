
# include <stdio.h>
# include "sourceFun.c"

int main(){
    int one = 10;
    int two = 15;
    int result;

    result = adder(one, two);

    printf("%d\n", result);
    
    return 0;
}