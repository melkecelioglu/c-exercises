#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {

    int num, last, first, temp, swap, count = 0;

    printf("Enter any desired number : \n");
    scanf("%d", &num);

    temp = num;
    last = temp % 10;
    count = (int)log10(temp);

    while(temp>=10)
    {
        temp /= 10;
    }
    first = temp;
    swap = (last * pow(10, count) + first) + (num - (first * pow(10, count) + last));

    printf("LAST : %d \t FIRST : %d \t NUM : %d \n", last, first, num);                       /*Use this line, if the logic sound confusing */

    printf("%d is swapped to %d\n", num, swap);
    return 0;
}
