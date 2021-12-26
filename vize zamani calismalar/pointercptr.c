#include <stdio.h>

int main(){

    int A[]={2,4,5,8,1};
    int i;
    int *p=A;
    
    p++;
    for(int i=0;i<5;i++){

    printf("address= %p\n", &A[i]);
    printf("address= %p\n", A+i);
    printf("value= %d\n", A[i]);
    printf("value= %d\n", *(A+i));

    }

    return 0;
}