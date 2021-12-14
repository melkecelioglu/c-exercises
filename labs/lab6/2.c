#include <stdio.h>
 void diziYazdir(char *dizi);
int main()
{
     char dizi[]={'a','b','c','d','\0'};

     char *p = &dizi[0];
     diziYazdir(p);
    
    return 0;
}

 void diziYazdir(char *dizi){
     
   
    printf("The input string is: ");
    while(*dizi!='\0')//Son artik
        printf("%c",*dizi++);


 }