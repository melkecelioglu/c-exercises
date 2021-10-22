#include <stdio.h>

typedef float gercel;
typedef int tam;

int main(){

    tam n, m;
    gercel ortalama;
    printf("iki sayi giriniz: ");
    scanf("%d %d", &n, &m);
    ortalama= (gercel) n/m;
    printf("\n ortalama: %f \n", ortalama);
  
    return 0;

}