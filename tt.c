#include <stdio.h>

void azalt1(){
int sayi=10;
sayi--;
printf("sayi %d \n",sayi);
}

void azalt2(){
static int sayi=10;
sayi--;
printf("sayi %d \n",sayi);
}

int main(){
azalt1();
azalt1();
azalt1();

printf("----------------\n");
azalt2();
azalt2();
azalt2();
return 0;
}
