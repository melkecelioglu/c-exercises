#include <stdio.h>

int main(){

    int x;
    for(x=1; x<=10; x++){

        if(x==5)
        // 5 i atla demek
        continue;

        printf("%d", x);
    }

    printf("\nUsed continue to skip printing the value 5 \n");


    return 0;

}