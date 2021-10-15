#include <stdio.h>
#include "q3.h"
#include <stdlib.h>
#include <time.h>

static int kareAl(int sayi){

    return sayi*sayi;
}

int uret(){
    int sayi;
    srand(time(NULL));
    sayi = (rand()%60) + 20;
    

}