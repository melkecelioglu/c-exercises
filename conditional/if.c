#include <stdio.h>

int main(){

    int num;

    printf("enter any number to check even or odd");

    scanf("%d", &num);

    (num%2==0)
    ? printf ("the number is EVEN")
    : printf ("the number is ODD");

    return 0;
}