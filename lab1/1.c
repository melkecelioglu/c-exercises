#include <stdio.h>

int main(){

    int sayi= 43;
    //float sayi2= 65.98;
    int sayi2,sayi3;

    int sonuc = sayi2+ sayi;
    printf("hello world \n");
    printf("first entered num: %d\n second entered num: %.2f \n", 123, 123.45678);
    printf(" %d + %d = %d ", sayi, sayi2, sonuc);

    printf("enter a num: ");
    scanf("%d", &sayi3);
    printf("enter second num: ");
    scanf("%d", &sayi2);
    printf("sonuc: %d", (sayi2 + sayi3));

    

    return 0;
}