#include <stdio.h>

int main(){

    int i, num;
    printf("enter a num: ");
    scanf("%d", &num);

    printf("Natural numbers from 1 to %d : \n", num);

    for (int i = 0; i < num; i++)
    {
       printf("%d \n", i);
    }
    

/// or with while
i=1;
   while(i<=num)
    {
        printf("%d\n", i);
        i++;
    }



    return 0;
}