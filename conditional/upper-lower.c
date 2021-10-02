
#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;

    //two ways
    //import <ctype.h> used for isupper() and islower()

       printf("Enter any character: ");
       scanf("%c", &ch);
       if (isupper(ch))
       //if(isupper(ch)) == if(isupper(ch) == 1) !!!
       {
                 printf("'%c' is an uppercase alphabet.", ch);
  
       }
       else if (islower(ch))
       {
                 printf("'%c' is a lowercase alphabet.", ch);
  
       }
       else
       {
                 printf("'%c' is not an alphabet.", ch);
  
       }
       
       
       




    //or

    /* Input character from user */
    printf("Enter any character: ");
    scanf("%c", &ch);


    if(ch >= 'A' && ch <= 'Z')
    {
        printf("'%c' is uppercase alphabet.", ch);
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        printf("'%c' is lowercase alphabet.", ch);
    }
    else
    {
        printf("'%c' is not an alphabet.", ch);
    }

    return 0;
}