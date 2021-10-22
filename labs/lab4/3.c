// Bir tamsayı dizisini ve eleman sayısını parametre olarak alarak,
// elemanlarının büyükten küçüğe ya da
// küçükten büyüğe doğru sıralı olup olmadığını kontrol edip 
// (dizi sıralama işlemi gerçekleştirmeden) sıralı değilse 0,
// küçükten büyüğe sıralıysa 1,
// büyükten küçüğe sıralı ise 2 değerini döndüren 
// siraliMi() fonksiyonunu gerçekleştiriniz.



   #include <stdio.h>
int main()
{
  int n, s[1000], a = 1, d = 1, i;

  siraliMi(s[1000],n);

  return 0;
}

int siraliMi(int s[1000], int n){

    int n, s[1000], a = 1, d = 1, i;

  scanf("%d", &n);

  for (i = 0; i < n; i++)
    scanf("%d", &s[i]);

  i = 0;

  while ((a == 1 || d == 1) && i < n - 1) {
    if (s[i] < s[i+1])
      d = 0;
    else if (s[i] > s[i+1])
      a = 0;
    i++;
  }

  if (a == 1)
    printf("The array is sorted in ascending order.\n");
  else if (d == 1)
    printf("The array is sorted in descending order.\n");
  else
    printf("The array is not sorted.\n");

  return 0;
}

int siraliMi(){

  
}