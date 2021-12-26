#include <stdio.h>
#define buyuk(a,b) ( (a>b) ? a:b )

int main(){
    int x,y,eb;

    printf("enter two num: ");
    scanf("%d%d", &x, &y);
    eb= buyuk(x,y);

    printf("bigger num is %d:" , eb);
    return 0;
}