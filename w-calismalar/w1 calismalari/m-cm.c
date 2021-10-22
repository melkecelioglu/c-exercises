#include <stdio.h>

int main(){

    float cm, m, km;

    printf("enter length in centimeter: ");
    scanf("%f", &cm);
    m = cm /100.0;
    km = cm /100000.0;

    printf("lenght in meter: %.2f m \n", m);
       printf("lenght in kilometer: %.2f km \n", km);

    return 0;
}