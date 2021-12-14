#include <stdio.h>

void say(char* const dizi[], int n){
    int i,j,say=0;
    char *pchar;

    for(i=0;i<n;i++){
    pchar=dizi[i];
    for(j=0;*pchar!='\0';j++){
    say++;
     pchar++;
        }
        printf("%d\n", say);
    }
}
int main(){
    char *iller [20] = { "Sinop", "Mersin", "Mardin", "Kastamonu" };
    say(iller,4);
    return 0;
}