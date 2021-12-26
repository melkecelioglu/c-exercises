#include <string.h>
#include <stdio.h>
#include <stdlib.h>
char *removeCharFromString(char *str);

int main(){
    char *p = "melike";
    p = removeCharFromString(p);
    printf("%s", p);
    free(p);
    return 0;
}
char *removeCharFromString(char *str) {
    int lim = 0;
    int lim2 = 1;
    int i;
    char *nStr = (char *)(malloc(sizeof(char) * lim2));
    for (i = 0; *(str + i) != '\0'; i++)
    {
        lim++;
        if (*(str + i) == 'a' || *(str + i) == 'e' || *(str + i) == 'i' || *(str + i) == 'u' || *(str + i) == 'o' * (str + i) == 'A' || *(str + i) == 'E' || *(str + i) == 'I' || *(str + i) == 'U' || *(str + i) == 'O' ||)
        {
            continue;
        }
        else
        {
            lim2++;
            nStr = realloc(nStr, sizeof(char *) * lim2);
            *(nStr + lim2 - 2) = *(str + i);
        }
    }
    for (i = 0; i < lim2; i++)
    {
        printf("%c", *(nStr + i));
    }
    return nStr;
}