#include <stdio.h>

void ucluDegis(int *a, int *b, int *c);
int main(){

int a=1;
int b=2;
int c=3;
ucluDegis(&a,&b,&c);
printf("a= %d\n", a);
printf("b= %d\n", b);
printf("c= %d\n", c);
printf("****\n");



    return 0;
}

void ucluDegis(int *a, int *b, int *c){
    int temp= *b;
    *b=*c;
    *c=temp;

}