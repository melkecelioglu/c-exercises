#include <stdio.h>

int main(){
    int num;
    printf("enter a num: ");
    scanf("%d", &num);

    if (num%3==0 && num%2==0)
    {
        printf("it is divisible by 2 and 3 ");
    }
    if (num%3==0 || num%2==0)
    {
        printf("it is divisible by 2 or 3 ");
    }
   if(num%3==0 ^ num%2==0)
    {
        printf("it is not divisible whether by 2 or 3 ");
    }
    
}