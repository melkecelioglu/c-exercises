#include <stdio.h>
int main(){

    int day, week, year;
    printf("enter days:");
    scanf("%d", &day);

    year= day/365;
    week = (day % 365)/7;
    day = day - ((year * 365) + (week * 7));

    printf("years: %d\n", year);
    printf("week: %d\n", week);
    printf("days: %d", day);


    return 0;
}