#include <stdio.h>

void displayBits(unsigned int value);
int main(){
  /*  unsigned int x;
    printf("%s", "enter a positive int: ");
    scanf("%u", &x);
    displayBits(x);
*/
//and
unsigned int number1 = 65535;
unsigned int mask = 1;
puts("the result: ");
displayBits(number1);
displayBits(mask);
puts("using & is: ");
displayBits(number1 & mask);
//OR
number1=15;
unsigned int setBits= 241;
displayBits(number1);
displayBits(setBits);
puts("using | is: ");
displayBits(number1 | setBits);


//XOR

number1=15;
unsigned int number2= 199;
puts("result: ");
displayBits(number1);
displayBits(number2);
puts("using ^ is: ");
displayBits(number1 ^ number2);

// complement ~
number1= 21845;
puts("the result of one's complement ~ is: ");
displayBits(number1);
puts("is");
displayBits(~number1);
    return 0;
}

void displayBits(unsigned int value){
    unsigned int displaymask = 1<<31;
    printf("%10u= ", value);

    for(unsigned int c=1 ; c<=32; ++c){
        putchar(value & displaymask ? '1': '0');
        value<<=1;
        if(c%8==0){
            putchar(' ');
        }
    }
    putchar('\n');
}