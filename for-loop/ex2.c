#include <stdio.h>

int main(){

    int sum = 0, number;
    for(number = 2; number <=100; number+=2)
        sum+=number;
        
    printf("sum is %d\n", sum);



    return 0;
}