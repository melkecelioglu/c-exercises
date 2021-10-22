#include <stdio.h>
#include <stdlib.h>
 
void degerArtir();
int m = 11;
 
int main() {
 
    printf("*** global main fonksiyonu icerigi baslangic ***\n");
    printf("m= %d\n", m);
    printf("*** global main fonksiyonu icerigi bitis ***\n");
 
    degerArtir();
    return 0;
}
 
void degerArtir() {
    m=m+1;
    printf("*** degerArtir fonksiyonu icerigi baslangic ***\n");
    printf("new m = %d\n", m);
    printf("*** degerArtir fonksiyonu icerigi bitis ***\n");
 
}