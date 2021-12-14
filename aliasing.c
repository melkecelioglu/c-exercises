#include <stdio.h>

int main(){


    int i=8;
    int *p=&i;
    printf("i: %d\n", i);
    printf("&i: %p\n", &i);
    printf("p: %p\n", p);
    printf("*p: %d\n", *p);
    printf("***************");
    i=9;
    printf("i: %d\n", i);
    printf("&i: %p\n", &i);
    printf("p: %p\n", p);
    printf("*p: %d\n", *p);
    printf("***************");
    i=4;
    printf("i: %d\n", i);
    printf("&i: %p\n", &i);
    printf("p: %p\n", p);
    printf("*p: %d\n", *p);



    return 0;
}