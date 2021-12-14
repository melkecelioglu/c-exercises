#include <stdio.h>

int main(){
    int sayi1=123;
    int sayi2=12;
    int *p=&sayi1;
    *p=sayi2;
    p=&sayi2;
    *p+=44;
    printf("sayi1: %d\n", sayi1);
       printf("sayi2: %d\n", sayi2);
          printf("&sayi1: %p\n", &sayi1);
             printf("&sayi2: %p\n", &sayi2);
                printf("p: %p\n", p);
                   printf("*p: %d\n", *p);
                      printf("&p: %p\n", &p);
    return 0;
}