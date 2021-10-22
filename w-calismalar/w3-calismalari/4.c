#include <stdio.h>
int main()
{
    int i,num;
    int count=0;
    printf("enter a num:");
    scanf("%d",&num);
    for(i=num;i>0;i=i/10){
        count++;
    }

    printf("%d",count);
    return 0;
}