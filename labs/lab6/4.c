#include <stdio.h>
#include <stdlib.h>

struct Array
{
    int length;

    double *array;
};

typedef struct Array Array;

Array* NewArray(int length)
{
    /* Allocate the memory for the struct Array */
    Array *newArray = (Array*) malloc(sizeof(Array));

    /* Insert only non-negative length's*/
    newArray->length = (length > 0) ? length : 0;

    newArray->array = (double*) malloc(length*sizeof(double));

    return newArray;
}

void SetArray(Array *structure,int length,double* array)
{
    structure->length = length;
    structure->array = array;
}

void PrintArray(Array *structure)
{       
    if(structure->length > 0)
    {
        int i;
        printf("length: %d\n", structure->length);
        for (i = 0; i < structure->length; i++)
            printf("%g\n", structure->array[i]);
    }
    else
        printf("Empty Array. Length 0\n");
}

int main()
{
    int i;
    Array *negativeTest, *days = NewArray(5);

    double moreDays[] = {1,2,3,4,5,6,7,8,9,10};

    for (i = 0; i < days->length; i++)
        days->array[i] = i+1;

    PrintArray(days);

    SetArray(days,10,moreDays);

    PrintArray(days);

    negativeTest = NewArray(-5);

    PrintArray(negativeTest);

    return 0;
}