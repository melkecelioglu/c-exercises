#include<stdio.h>
int strUzun(char * str);

int main() {
  char *pt;
  int strUzun(char * pt);
 
  return 0;
}

int strUzun(char * str){
char str1[20];
  char *pt;
  int i = 0;

  printf("Pointer Example Program : Find or Calculate Length of String \n");
  printf("Enter Any string [below 20 chars] : ");
  gets(str1);
  pt = str1;
  while (*pt != '\0') {
    i++;
    pt++;
  }
  printf("Length of String : %d", i);


}