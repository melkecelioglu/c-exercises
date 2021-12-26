#include <stdio.h>


int main(){

    char input[20];
    char string2[]="buraya ben istedigim kadar yazabilirim";
    int i;

    printf("enter a string: ");
    scanf("%s", input);

    printf("string1 is: %s \n"
    "string2 is %s \n", input, string2);

    for(i=0; input[i]!= '\0';i++){
        printf("%c", input[i]);
        printf("\n");

    }


    return 0;
}