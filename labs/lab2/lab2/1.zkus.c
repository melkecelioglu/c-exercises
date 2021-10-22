#include <stdio.h>

int isPalindrome(int num);

int main(){
    int num;
    printf("bir sayi giriniz : ");

    scanf("%d", &num);
    
    if(isPalindrome(num)){
        printf("%d palindrome sayıdır.\n", num);
    }
    else{
        printf("%d palindrome sayı değildir.\n", num);
    }
    
    return 0;

}

int isPalindrome(int num){
    int temp = num;

    int reverseNumber = 0;
    while(num > 0){
        reverseNumber = (reverseNumber * 10) + (num % 10 );
        num/=10;
    }
    if(reverseNumber == temp)
        return 1;
    return 0;
}