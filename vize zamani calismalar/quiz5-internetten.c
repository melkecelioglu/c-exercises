#include<stdio.h>
void  removeCharFromString(char *str);
int main()
{
    char str;
    int i=0, j;
    printf("Enter a String: ");
    scanf("%s", &str);
    removeCharFromString(&str);
    return 0;
}

 void  removeCharFromString(char *str){

    int i=0, j, k;
    while(str[i]!='\0')
    {
        k=0;
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
            j=i;
            while(str[j-1]!='\0'){
                str[j] = str[j+1];
                j++;
            }
            k = 1;
        }
        if(k==0)
            i++;
    }
    printf("\nyeni string: %s", str);
}