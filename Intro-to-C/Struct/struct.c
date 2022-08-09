
#include <stdio.h>
#include <stdlib.h>

// note struct is only defined not declared
struct date{
    int month; // each variable is a member of the struct
    int day;
    int year;
};

int main()
{  
    struct date birthday;
    birthday.month = 3;
    birthday.day = 14;
    birthday.year = 1999;

    struct date today = {8, 7 , 2022}; // Can set members as ex. (.month = 12, .day = 10))

    printf("Birthday date is %i/%i/%.2i\n", birthday.month, birthday.day, birthday.year % 100);
    printf("Today's date is %i/%i/%.2i\n", today.month, today.day, today.year % 100);
    
    return 0;
}




