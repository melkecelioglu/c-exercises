#include <stdio.h>
int main()
{
   int n, c, d, a[100], b[100];

   printf("Array'deki eleman sayisini girin\n");
   scanf("%d", &n);

   printf("Array'deki elemanlari girin\n");

   for (c = 0; c < n ; c++)
      scanf("%d", &a[c]);

   /*
    * a dizisinin sonundan başlayarak öğeleri b dizisine kopyalıyoruz
    */

   for (c = n - 1, d = 0; c >= 0; c--, d++)
      b[d] = a[c];

   /*
    * Ters çevrilmiş diziyi orijinaline kopyalıyoruz.
    *
    */

   for (c = 0; c < n; c++)
      a[c] = b[c];

   printf("Ters cevrilmis dizi:\n");

   for (c = 0; c < n; c++)
      printf("%d\n", a[c]);

   return 0;
}