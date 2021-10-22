#include<stdio.h>
#include <math.h>

int perfectNum(int num);


int main()
{
        int num;
        printf("enter a num ");
        scanf("%d", &num);
        perfectNum(num);
        return 0;
}

int perfectNum(int num)
{
        int total = 0;
        for (int i = 1; i < num; i++)
        {
               if (num % i == 0 )
               {
                       total +=i;
               }
        }
        if(num == total )
                printf("%d is a perfect number", num);

        else
                printf("%d is not a perfect number" ,num);
return 0;
}