//implementasyon dosyası

#include <stdio.h>
#include "mylibrary.h"

int maxTwo(int n1, int n2){
if(n1>n2)
    return n1;
return n2;
}
int fact(int num){

    int result=1;
    while(num>0)
        result *=num--;
}

int checkPalindrome(int number)
{
  int temp, remainder, rev=0;
  temp = number;

  while( number!=0 )
  {
     remainder = number % 10;
     rev = rev*10 + remainder;
     number /= 10;
  }

  if ( rev == temp ) return 0;
  else return 1;
}