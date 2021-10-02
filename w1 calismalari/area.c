#include <stdio.h>
#include <math.h>


int main(){

    float side, area;
    printf( "enter side of the quilateral triangle \n");
    scanf("%f", &side);
    area= (sqrt(3)/4)* (side * side);

    printf("area of equilateral triangle =  %f sq. units. \n", area);

    return 0;
}