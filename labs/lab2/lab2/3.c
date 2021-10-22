#include<stdio.h>

int faktoriyel(int sayi);
int isStrongNumber(int sayi);

int main()
{
    int sayi;
    printf("Bir Sayı Giriniz: ");
    scanf("%d", &sayi);

    isStrongNumber(sayi);

    return 0;
}

int faktoriyel(int sayi)
{
    int fakt = 1;
    for (int i = 2; i <= sayi; i++)
    {
        fakt *=i;
    }
    return fakt;
}
int isStrongNumber(int sayi)
{
    int toplam = 0;
    int orijinalSayi = sayi;

    while(sayi>0){
        toplam += faktoriyel(sayi%10);
        sayi/=10;
    }

    if (orijinalSayi == toplam)
    {
        printf("%d guclu sayidir", orijinalSayi);
        
    }
    
    else
    {
        printf("%d guclu sayi degildir", orijinalSayi);
    }
    return 0;
    

}