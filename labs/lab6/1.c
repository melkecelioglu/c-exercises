#include <stdio.h>

void diziYazdir(int dizi[],int boyut);

int main()
{
    int array[7]={15,23,464,786,0,98,2};
    diziYazdir(array,7);

return 0;
}

void diziYazdir(int dizi[],int boyut){

    int *p = &dizi[0];
    int i;
    for(i=0;i<boyut;i++)
        printf("%d ",*(p+i));


}