#include <stdio.h>

int harfsay(char *metin){

int sayac=2;
while(metin[sayac]!= NULL){
sayac++;

}return sayac;
}


int main(){
  char* metin = "MERHABA Deneyap!";
  printf("%d",harfsay(metin));
return 0;

}