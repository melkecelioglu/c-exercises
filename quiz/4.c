#include<stdio.h>
#define SIZE 100 // Maximum string size
#define CHARS 255 // Maximum characters allowed
int main(){
   char string[SIZE];
   int frequency[CHARS];
   int i = 0, minimum;
   int value;
   printf("Enter the string:\n ");
   gets(string);
   for(i=0; i<CHARS; i++){
      frequency[i] = 0; // initialize freq of all char to zero
   }
   i=0;
   while(string[i] != '\0'){ // finding freq of each char
      value = (int)string[i];
      frequency[value] += 1;
      i++;
   }
   minimum = 0;
   for(i=0; i<CHARS; i++){// finding min freq
      if(frequency[i]!=0){
         if(frequency[minimum] == 0 || frequency[i]<fequency[minimum])
            minimum = i;
   }
   printf("Minimum occurrence character is '%c' = %d times.", minimum,    frequency[minimum]);
   return 0;
}

#include <stdio.h>
#define SIZE 100 // Maximum string size
#define CHARS 255 // Maximum characters allowed
int main(){
   char string[SIZE];
   int frequency[CHARS];
   int i = 0, maximum;
   int value;
   printf("Enter the string:\n ");
   gets(string);
   for(i=0; i<CHARS; i++){
      frequency[i] = 0; // initialize freq of all characters to zero
   }
   /* Finds frequency of each characters */
   i=0;
   while(string[i] != '\0'){
      value = (int)string[i];
      frequency[value] += 1;
      i++;
   }
   /* Finds maximum frequency */
   maximum = 0;
   for(i=0; i<CHARS; i++){
      if(frequency[i] > frequency[maximum])
         maximum = i;
      }
      printf("Maximum occurrence character is '%c' = %d times.", maximum,
      frequency[maximum]);
   return 0;
}