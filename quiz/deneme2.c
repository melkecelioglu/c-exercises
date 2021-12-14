#include <stdio.h>
#define MAX_BOYUT 200  // Maximum string size
#define MAX_CH 220 // Maximum characters allowed


int main()
{
    char str[MAX_BOYUT];
    int freq[MAX_CH]; //Stores frequency of each character
    int i = 0, min;
    int kod;

    printf("Enter any string: ");
    gets(str);

    /* Initialize frequency of all characters to 0 */
    for(i=0; i<MAX_CH; i++)
    {
        freq[i] = 0;
    }


    /* Finds frequency of each characters */
    i=0;
    while(str[i] != '\0')
    {
        kod = (int)str[i];
        freq[kod] += 1;

        i++;
    }


    /* Finds minimum frequency */
    min = 0;
    for(i=0; i<MAX_CH; i++)
    {
        if(freq[i] != 0)
        {
            if(freq[min] == 0 || freq[i] < freq[min])
                min = i;
        }
    }


    printf("Minimum occurring character is '%c' = %d.", min, freq[min]);

    return 0;
}