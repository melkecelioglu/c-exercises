#include <stdio.h>

   int* enYakinEnUzakBul(int* dizi, int sayi);

int main(){
     int *dizi[] = [49, 17, 48, 82, 87, 71, 31, 34, 14, 29];
       int sayi = 28;
    enYakinEnUzakBul(*dizi, sayi);


    return 0;
}


int *enYakinEnUzakBul(int *dizi, int sayi)
{
    int i;
    int temp = 0;
    int min = 100;
    int mintemp = 100;
    int max = 0;
    int maxtemp = 0;
    for (i = 0; i < 10; i++)
    {
        if ((*(dizi + i) - sayi) < 0)
        {
            temp = (*(dizi + i) - sayi) * (-1);
        }
        else
        {
            temp = (*(dizi + i) - sayi);
        }
        if (temp >= maxtemp)
        {
            max = *(dizi + i);
            maxtemp = temp;
        }
        if (temp <= mintemp)
        {
            min = *(dizi + i);
            mintemp = temp;
        }
    }
    int *cikti = malloc(2 * sizeof(int));
    *cikti = max;
    *(cikti + 1) = min;
    return cikti;
}