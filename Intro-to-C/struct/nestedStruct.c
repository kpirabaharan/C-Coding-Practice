#include <stdio.h>
#include <stdlib.h>


struct date{
    int month; 
    int day;
    int year;
};

struct time{
    int hour; 
    int minute;
    int second;
};

struct dateAndTime{
    struct date sdate;
    struct time stime;

};


int main()
{
    struct dateAndTime event = {{8, 7, 2021}, {3, 30, 0}};

    printf("Date and Time is: %i/%i/%i - %i/%i/%i", event.sdate.month,
     event.sdate.day, event.sdate.year, event.stime.hour,
     event.stime.minute, event.stime.second);
    
    return 0;
}