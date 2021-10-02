#include <stdio.h>
int main(){
    int principle, time;
    float rate, comp;

    printf("enter principle (amount):  ");
    scanf("%d", &principle);
    printf("enter time: ");
    scanf("%d", &time);
    printf("enter rate: ");
    scanf("%f", &rate);

    comp = (principle * (1 + (rate/100)));
    printf("here is the comp: %f", comp);

    

    return 0;
}