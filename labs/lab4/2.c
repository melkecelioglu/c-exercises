//Kocaeli kelimesinde geçip sakarya kelimesinde geçmeyen harfleri bulunuz.

// C++ program to print common characters
// of two Strings in alphabetical order
#include <stdio.h>


int main() {
    char a[] = "kocaeli";
    char b[] = "sakarya";
    int x[10] = {0};
    int i;
    int index;

    for (i = 0; a[i] != '\0'; i++) {
        index = a[i] - 'a';
        if (index > 10) {

            index = a[i] - 'A';
        }
        x[index]++;
    }

    for (i = 0; b[i] != '\0'; i++) {
        index = b[i] - 'a';
        if (index > 10) {

            index = b[i] - 'A';
        }

        if (x[index] > 0)
            x[index] = -1;
    }

    printf("Common characters in '%s' and '%s' are ", a, b);
    for (i = 0; i < 10; i++) {
        if (x[i] < 0)
            printf("%c", 'a'+i);
    }
    printf("\n");




}


//



