#include <stdio.h>

void printCharacters( const char *sPtr);

int main(){
    
    char string[]= "print characters in string";

    printf("the string is: \n");
    printCharacters(string);
    printf("\n");


    return 0;
}

void printCharacters( const char *sPtr){

    for( ; *sPtr != '\0'; sPtr++){
        printf("%c", *sPtr);
    }
}