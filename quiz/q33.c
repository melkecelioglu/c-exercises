void tersMetin(char *arr)
{
    char *p = arr;
    char *arr2;
    char temp;
    int count;
    for (; *p != '\0'; p++)
    {
        ;
    }
    p--;
    count = p - arr;
    int i;
    for (i = 0; i < count / 2; i++)
    {
        if (*arr == ' ' || *p == ' ')
        {
            continue;
        }
        temp = *arr;
        *arr = *p;
        *p = temp;

        arr++;
        p--;
    }
}


int main()
{
    char arr[100] = "Fatih sultan";
    tersMetin(arr);
    printf("Reverse of the string: %s\n", *arr);
  
    return 0;
}