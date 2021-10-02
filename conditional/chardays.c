#include <stdio.h>

int main(){

    const char * WEEKS[] = {
        "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"
    };
    int week;
    printf("enter a week number (1-7):  ");
    scanf("%d", &week);
    if (week>0 && week<8)
    {
        printf("%s", WEEKS[week-1]);
    }
    else
    {
        printf("invalid inuput! ");
    }
    
    


    return 0;
}