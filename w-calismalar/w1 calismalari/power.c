#include <stdio.h>
#include <math.h>

int main(){

int base, exponent, power, sqrt;
int side, area;
    printf("enter base: ");
    scanf("%d", &base);
    printf("enter exponent: ");
    scanf("%d", &exponent);

power = pow(base, exponent);
sqrt = sqrtf(base);

printf("here is the power : %d\n", power);
printf("here is the sqrt of base %d", sqrt);


    printf("enter side: ");
    scanf("%d", &side);

    area= (side * side) * (sqrtf(3)/4);
    printf("here is the area : %d \n", area);



    return 0;
}