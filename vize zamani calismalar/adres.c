#include <stdio.h>

int main(){


    char array[5]={'a','q','a','n','n'};
    char bArray[15];
    printf("array= %p\n", array);
     printf("array[0]= %c\n", array[0]);
     printf("array[1]= %c\n", array[1]);
     printf("array[2]= %c\n", array[2]);
     printf("array[3]= %c\n", array[3]);
     printf("array[4]= %c\n", array[4]);
     printf("&array= %p\n", &array);
      printf("&array[0]= %p\n", &array[0]);
       printf("&array[1]= %p\n", &array[1]);
        printf("&array[2]= %p\n", &array[2]);
        printf("&array[3]= %p\n", &array[3]);
        printf("&array[4]= %p\n", &array[4]);

    /*printf("***********************");


     printf("array= %p\n", bArray);
     printf("array[0]= %c\n", bArray[0]);
     printf("array[1]= %c\n", bArray[1]);
     printf("array[2]= %c\n", bArray[2]);
     printf("array[3]= %c\n", bArray[3]);
     printf("array[4]= %c\n", bArray[4]);
     printf("&array= %p\n", &bArray);
      printf("&array[0]= %p\n", &bArray[0]);
       printf("&array[1]= %p\n", &bArray[1]);
        printf("&array[2]= %p\n", &bArray[2]);
        printf("&array[3]= %p\n", &bArray[3]);
        printf("&array[4]= %p\n", &bArray[4]);
    */
   return 0;
}