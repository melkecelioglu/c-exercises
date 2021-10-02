#include <stdio.h>

int main(){

    int num1, num2, max;

    printf("input num1: ");
    scanf("%d", &num1);

    printf("input num2: ");
    scanf("%d", &num2);

    if (num1>num2)
    {
        max = num1;
    }
    else
    {
        max= num2;
    }

    printf("maximum = %d", max);
    
    


    return 0;
}