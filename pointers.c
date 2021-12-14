#include <stdio.h>

int main(){

    int a;
    int *aPtr;

    a = 7;
    aPtr = &a;
    printf(" a is %d\n",a);
    printf(" address of a is %p\n",&a);
    printf(" value of aPtr is %p\n",aPtr);
    printf(" value of *aPtr is %d\n",*aPtr);

    printf("show that * and & are complements of each other \n");
    printf("&*aPtr = %p\n",&*aPtr);
    printf("*&aPtr = %p\n",*&aPtr);


    return 0;
}