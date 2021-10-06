#include <stdio.h>

int main(){

    char ch;
    printf("enter any character: ");
    scanf("%c", &ch);

    //here are the solutions:

      (ch>='a' && ch<='z') || (ch>='A' && ch<='Z') 
        ? printf("It is ALPHABET")
        : printf("It is NOT ALPHABET");


    //or:
    if ((ch>='a' && ch<= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
       printf("character is an ALPHABET");
    }
    else
    {
        printf("character is NOT an ALPHABET");
    }

    //or you can do as:

    if ((ch >= 97 && ch<= 122) || (ch >= 65 && ch <= 90))
    {
            printf("character is an ALPHABET");
   
    }
    else if (ch >=48 && ch<=57)
    {
        printf("'%c' is digit .", ch);
    }
    
    else
    {
            printf("character is NOT an ALPHABET");
            printf("'%c' is a special character. ", ch);
   
    }
    
    
    
    

    return 0;
}