#include <stdio.h>

int main(){
    int i=8;
    int *p=&i;
    int *q=&i;

    printf("i= %d\n", i);
       printf("*p= %p\n", p);
          printf("p= %d\n", *p);
            printf("*q= %p\n", q);
          printf("q= %d\n", *q);
    i=9;

printf("*************************\n");
     printf("i= %d\n", i);
       printf("*p= %p\n", p);
          printf("p= %d\n", *p);
            printf("*q= %p\n", q);
          printf("q= %d\n", *q);



    return 0;
}