#include<stdio.h>

int checkPalindrome(int number){
  int temp, remainder, m=0;
  temp = number;

  while( number!=0 )
  {
     remainder = number % 10;
     m = m*10 + remainder;
     number /= 10;
  }

  if ( m == temp ) return 0;
   // return 1 genelde konulur üsttekine diğerine return 0 koy
  else return 1;


}

int main(){
  int number;

  printf("Enter the number: ");
  scanf("%d", &number);

  if(checkPalindrome(number) == 0)
  printf("%d is a palindrome number.\n",number);
  else
  printf("%d is not a palindrome number.\n",number);

  return 0;
}