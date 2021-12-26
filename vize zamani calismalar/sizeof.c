#include <stdio.h>

int main(){

    int x;
    double d;
    char c;
    char character='m';
    char chA[]={'m','e','l'};
    char chA1[]="deneme";
    printf("size of x= %zu\n", sizeof x);
    printf("size of d= %zu\n", sizeof d);
    printf("size of c= %zu\n",sizeof c);
    printf("size of ch= %zu\n",sizeof character);
    printf("size of chA= %zu\n", sizeof chA);
    printf("size of chA1= %zu\n", sizeof chA1);
    int i=0;
    while(chA[i]!='\0'){
        printf("%c",chA[i]);
        i++;
    }
    printf("\n");

    int j=0;

    while(chA1[j]!='\0'){
        printf("%c",chA1[j]);
        j++;
    }
    
    
    return 0;
}