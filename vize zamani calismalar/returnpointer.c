#include <stdio.h>

int *max (int *p , int *q);

int main(void){

int i=8;
int j=9;
int *r;
r=max(&i,&j);
printf("%d\n", *r);


    return 0;
}

int *max (int *p , int *q){
    if(*p>*q){
        return p;
    }
    else{return q;}
}