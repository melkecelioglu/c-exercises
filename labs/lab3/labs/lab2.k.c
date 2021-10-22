#include <stdio.h>

void azalt1(){
int sayi= 10;
sayi--;
printf(" sayi: %d",sayi);
}

void azalt2(){
static int sayi= 10;
sayi--;
printf(" sayi: %d",sayi);

}

int main(){
    
    azalt1();
    azalt1();
    azalt1();
    printf("\n------------------\n");

    azalt2();
    azalt2();
    azalt2();


    return 0;
}