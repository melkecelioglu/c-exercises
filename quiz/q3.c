#include <stdio.h>
#include <string.h>
  

void tersMetin(char* arr)
{

    char *start;
    char *end;
    char temp;
    int x = strlen(arr);
    start = arr;
    end = arr;
    for (int i = 0; i < x - 1; i++){
        end++;
    }
    for ( int i = 0; i < x / 2; i++ ) {
       temp = *end;
        *end = *start;
        *start = temp;
  end--;
        start++;
        
    }
}
  

int main()
{
    char arr[100] = "Fatih sultan";
    tersMetin(arr);
    printf("tersi:  %s\n", arr);
  
    return 0;
}