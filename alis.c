#include <stdio.h>
int main(){

    char str[300];
    str[4]='F';
    //printf("%d", &str);
    printf("%s", &str[4]);
        return 0;
}