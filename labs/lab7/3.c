#include <stdio.h>
#include "2.h"

complex topla(complex* c1, complex* c2){
    complex csonuc;
    complex *cptr;
    cptr =c1;
    //cptr->re;
    csonuc.re =c1->re+c2->re;
    csonuc.im =c1->im+c2->im;
    return csonuc;
}

complex carpim(complex* c1, complex* c2){
    complex csonuc;
    csonuc.re=(c1-> re*c2 ->re)-(c1-> im*c2 ->im);
    csonuc.re=(c1-> re*c2 ->im)-(c1-> im*c2 ->re);
    return csonuc;
}

void yazdirKarmasik(complex c){
    printf("%.2f", c.re);
    if(c.im<0)
    printf("%.2fi", c.im);
    else 
      printf("+%.2fi", c.im);
}

void yazdirKarmasikDizi(complex * dizi, int n){
int i;
for(i=0;i<n;i++){
yazdirKarmasik(dizi[i]);
}
}