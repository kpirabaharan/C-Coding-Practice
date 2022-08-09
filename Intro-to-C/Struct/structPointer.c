#include <stdio.h>
#include <stdlib.h>

struct date {
    int month;
    int day;
    int year;
};

int main(void)
{
    struct date today, *datePtr;
    
    datePtr = &today;

    datePtr->month = 8; // Arrows are used in place of . in the case of struct ptr
    datePtr->day = 7;
    datePtr->year = 2022;
    
    printf("Today's date is %i/%i/%.2i.\n", datePtr->month, datePtr->day, datePtr->year);

    return 0;
}