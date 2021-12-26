#include <stdio.h>

int *square2(int *p);


int main(void){

    int i=2;
    int *j=square2(&i);
    printf("%d", *j);

    return 0;
}


int *square2(int *p){
    int result = *p * *p;
    printf("*p : %d \n", *p);
    return &result;
}
