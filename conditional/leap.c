#include <stdio.h>

int main(){

    int year;
    printf("enter a year: ");
    scanf("%d", &year);
    // first solution: 

    (year%4 == 0 && year%100!=0) ? printf("LEAP YEAR"):
    (year%400 == 0) ? printf("LEAP YEAR") : printf("COMMON YEAR");




    ///or another solution: 

    /*if (((year %4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
    {
       printf("LEAP YEAR");
    }
    else
    {
        printf("COMMON YEAR");
    }*/
    
    
    return 0;
}