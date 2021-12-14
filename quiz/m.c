#include <stdio.h>
#include <stdlib.h>

int length(char* str){
    char c = *str;
    int counter = 0;
    while(c != '\0'){
        str++;
        c = *str;
        counter++;
    }
    return counter;
}
void tersMetin(char* str){
    int i,x=0;
    char temp;
    for(i=length(str)-1;i>0;i--){
        temp =  *(str+x++);
        *(str+x++) = *(str+i);
        *(str+i) = temp;
    }
    for(i=0;i<length(str);i++){
        printf("%c",*(str+i));
    }
}
int main(){
    
	char arr[] = "Fatih sultan";
	tersMetin(arr); // fonksiyon çağrısından sonra arr = "natlus hitaF" olmalıdır, 

}