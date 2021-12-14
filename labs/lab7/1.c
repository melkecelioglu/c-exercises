#include <stdio.h>

int bolme(int bolunen , int bolen, int *kalan){
*kalan=bolunen%bolen;
return bolunen/bolen;
}

int main(){
int bolunen =14;
int bolen=4;
int bolum, kalan;
bolum=bolme(bolunen, bolen, &kalan);
printf("bolum: \n kalan : %d %d", bolum, kalan);

    return 0;
}