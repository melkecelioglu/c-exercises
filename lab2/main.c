#include <stdio.h>
#include "mylibrary.h"

// hata verirse "mylibrary.c"  yaz "mylibrary.h" a


int main(){
    int max= maxTwo(5,3);
    printf("max=%d", max);
    printf("%d", fact(9));
}