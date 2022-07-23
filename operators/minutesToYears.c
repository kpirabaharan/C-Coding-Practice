# include <stdio.h>

int main(){

    long int minutes;
    double minutes_in_year = 60 * 24 * 365;
    double minutes_in_day = 60 * 24;
    double years, days;

    printf("\nEnter the number of minutes: ");
    scanf("%li", &minutes);
    printf("You entered %li minutes\n", minutes);

    years = minutes / minutes_in_year;
    days = minutes /minutes_in_day;

    printf("This equates to %lf years\n", years);
    printf("This equates to %lf days\n", days);

}