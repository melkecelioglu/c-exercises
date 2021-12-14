#include <stdio.h>
#include "2.h"

int main(){
    complex c1, c2, c3,cs;
    complex cdizi[3];
    c1.re=3;
    c1.im=2;
       c2.re=-4;
    c2.im=3;
       c3.re=5;
    c3.im=-1;

    cdizi[0]=c1;
    cdizi[1]=c2;
    cdizi[2]=c3;
    yazdirKarmasikDizi(c1);
    cs=topla();



    return 0;
}