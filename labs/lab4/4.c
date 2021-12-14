//Bir sayının tersini bulmak için özyinelemeli bir fonksiyon yazın.
// Özyineleme kullanarak bir sayının tersi nasıl bulunur?


#include<stdio.h>  
#include<math.h>  
  
int reverse1(int num);
  
int main()  
{  
    int num, isNegative = 1, result = 0;  
  
    printf("Enter a number to reverse\n");  
    scanf("%d", &num);  
  
    isNegative = (num < 0);  
  
    if(isNegative)  
        num *= -1;  
  
    result = reverse1(num);  
  
    if(isNegative)  
        result *= -1;  
  
  
    printf("Reverse of %d is %d\n", num, result);  
  
    return 0;  
}  

int reverse1(int num)  
{  
    if(num)  
        return( (num%10) * pow(10, (int)log10(num)) + reverse1(num/10) );  
    else  
        return 0;  


        
}  