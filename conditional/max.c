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
    if (num1==num2)
    {
        printf("both are equal");
    }
    
    else
    {
        max= num2;
    }

    printf("%d is maximum", max);
    
    


    return 0;
}