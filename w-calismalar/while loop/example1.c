#include <stdio.h>

int main(){

    int passes=0, failure=0, student=1, result;


    while(student<=10){
        printf("enter result (1=pass, 2=fail): ");
        scanf("%d", &result);

        if( result == 1)
            passes = passes + 1;

        else
            failure=failure+1;
        
        student= student+1;
        
    }

    printf("passed %d\n", passes);
    printf("failed %d\n", failure);

    if(passes > 8 )
    printf("raise tuition\n");

    






    return 0;

}