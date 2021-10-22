#include <stdio.h>
int main(){

    float length, width, perimeter;
    printf("enter length of rectangle ");
    scanf("%f", &length);
     printf("enter width of rectangle ");
    scanf("%f", &width);

    perimeter = 2 * (length + width);

    printf("perimeter of rectangle = %f units", perimeter);
    return 0;
}