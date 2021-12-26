#include <stdio.h>

int main(){
    
    int x=7, y=3;

    const int *ptr = &x;
    printf("x= %d\n", x);
        printf("&x= %p\n", &x);
        printf("&y= %p\n", &y);
    printf("*ptr= %d\n", *ptr);
    printf("ptr= %p\n", ptr);

    x=8;
    printf("********\n");
      printf("&x= %p\n", &x);
         printf("&y= %p\n", &y);
    printf("x= %d\n", x);
    printf("*ptr= %d\n", *ptr);
    printf("ptr= %p\n", ptr);

    ptr= &y;
    printf("********\n");
    printf("&x= %p\n", &x);
       printf("&y= %p\n", &y);
    printf("x= %d\n", x);
    printf("x= %d, y=%d \n", x,*ptr);
    printf("ptr= %p\n", ptr);


    return 0;
}