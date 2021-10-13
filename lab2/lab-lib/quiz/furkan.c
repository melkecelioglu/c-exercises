#include <stdio.h>

int main()
{
    int girilen, asal = 0;
    printf("Bir sayı giriniz:");
    scanf("%d", &girilen);
    for (; girilen > 10; girilen = girilen / 10)
    {

        for (int i = 2; i < girilen; i++)
        {
            if (girilen % i == 0)
            {

                asal = 1;
                break;
            }
        }
    }
    if (asal == 0)
    {
        printf("asaldır");
    }
    else
    {
        printf("asal değil");
    }
    return 0;
}