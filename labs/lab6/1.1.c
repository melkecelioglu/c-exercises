#include <stdio.h>

int main(){

    int *p;
    int a=10;
    p=&a;
    int dizi[]={3,5,7,8};
    char ch[]= "Ankara";
    printf("a degeri: %d \n",a);
    printf("a adresi: %p \n", &a);
    printf("p gosterdigi adresi: %p \n", p);
    printf("p kendi adresi %p \n", &p);
    printf("p gosterdigi deger : %d \n", *p);
     printf("dizi :  %d \n", *dizi);
      printf("dizi 0 : %p \n", &dizi[0]);
        printf("dizi 1 : %p \n", &dizi[1]);

        printf("dizi 0 : %p \n", &ch[0]);
                printf("dizi 0 : %p \n", &ch[1]);

    


return 0;
}