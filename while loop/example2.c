#include <stdio.h>

int main(){

    int counter, grade, total, average;

    total =0;
    counter=1;

    while(counter <= 10) {
        printf("enter grade: ");
        scanf("%d", &grade);
        total = total + grade;
        counter = counter +1;
    }

    average = total /10;
    printf("class average is %d\n", average);



    return 0;
}