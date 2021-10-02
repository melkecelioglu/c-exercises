#include <stdio.h>

int main(){

    int num1, num2, num3;
    int max;

    printf("enter three num");
    scanf("%d%d%d", &num1,&num2,&num3);

    if (num1>num2 && num1>num3)
    {
        max= num1;
    }
    if (num2>num1 && num2>num3)
    {
        max= num2;
    }
       if (num3>num1 && num3>num2)
    {
        max= num3;
    }


    printf("max: %d", max);
    

    return 0;
}