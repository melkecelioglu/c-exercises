#include <stdio.h>
#include <stdlib.h>
 
void degerAzalt();
extern int m = 11;
 
int main() {
 
    printf("global main fonksiyonu icerisindesin \n");
    printf("m= %d\n", m);
 
    degerAzalt();
    return 0;
}
 
void degerAzalt() {
    m=m-1;
    printf(" deger azaltma fonksiyonu icerisindesin \n");
    printf("yeni m degeri = %d\n", m);
 
}