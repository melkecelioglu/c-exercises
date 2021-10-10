#include <stdio.h>
#include <math.h>
#include "functions.h"

int isPalindrome(int num) {
    int temp = num;

    int reverseNumber = 0;
    while(num > 0){
        reverseNumber = (reverseNumber * 10) + (num % 10);
        num /= 10;
    }

    if(reverseNumber == temp)
        return 1;
    return 0;
}

int isArmstrongNumber(int sayi){
     int orjinalSayi, sonBasamak, basamakSayisi, toplam;

    /* Copy the value of num for processing */
    orjinalSayi = sayi;

    /* Find total digits in num */
    basamakSayisi = (int) log10(sayi) + 1;

    /* Calculate sum of power of digits */
    while(sayi > 0)
    {
        /* Extract the last digit */
        sonBasamak = sayi % 10;

        /* Compute sum of power of last digit */
        toplam += (pow(sonBasamak, basamakSayisi));

        /* Remove the last digit */
        sayi /= 10;
    }

    /* Check for Armstrong number */
    if(orjinalSayi == toplam) {
        printf("%d Armstrong sayıdır", orjinalSayi);
    }
    else {
        printf("%d Armstrong sayı değildir", orjinalSayi);
    }

    return 0;
}

int faktoriyel(int sayi){

    int fakt = 1;
    for (int i = 2; i <= sayi; i++) {
        fakt *= i;
    }

    return fakt;
}

int isStrongNumber(int sayi){
    
    int toplam = 0;
    int orjinalSayi = sayi;

    while(sayi > 0){
        toplam += faktoriyel(sayi % 10);
        sayi /= 10;
    }

    
    if(orjinalSayi == toplam)
        printf("%d Güçlü Sayıdır", orjinalSayi);
    else
        printf("%d Güçlü Sayı Değildir", orjinalSayi);

    return 0;
}

int mukemmelSayi(int sayi){
    
    int toplam = 0;

    for (int i = 1; i < sayi; i++)
    {
        if(sayi % i == 0){
            toplam += i;
        }
    }
      
    if(sayi == toplam)
        printf("%d Mükemmel Sayıdır", sayi);
    else
        printf("%d Mükemmel Sayı Değildir", sayi);

    return 0;
}

int arkadasSayi(int sayi1, int sayi2){

    int sayi1BolenlerToplami = tamBolenlerinToplami(sayi1);
    int sayi2BolenlerToplami = tamBolenlerinToplami(sayi2);

    if(sayi1BolenlerToplami == sayi2 && sayi2BolenlerToplami == sayi1)
        printf("%d ve %d kardeş sayıdır", sayi1, sayi2);
    else
        printf("%d ve %d kardeş sayı değildir", sayi1, sayi2);

    return 0;
}

int tamBolenlerinToplami(int sayi){
    
    int toplam = 0;

    for (int i = 1; i < sayi; i++)
    {
        if(sayi % i == 0){
            toplam += i;
        }
    }

    return toplam;
}
