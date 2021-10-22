#include <stdio.h>
#include "q3.h"

int main(){
    int say;
    int karesi;
    say = uret();
    karesi = kareAl(say);
    printf("Uretilen sayi: %d \n",say);
    printf("Sayının karesi: %d", karesi);
    return 0;
}