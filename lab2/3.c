#include<stdio.h>
int fact (int val)
{
int a, b = 1;
for (a = 1; a <= val; a++)
{
b = b * a;
}
return b;
}
int main ()
{
int n, count, final_result, rem, sum = 0, tmp;
printf ("Enter a Number:\t");
scanf ("%d", &n);
tmp = n;
for (tmp = n; n > 0; n = n / 10)
{
count = 1, final_result = 1;
rem = n % 10;
final_result = fact(rem);
sum = sum + final_result;
}
if (sum == tmp)
{
printf ("%d is a Strong Integer\n\n", tmp);
}
else
{
printf ("%d is Not a Strong Integer\n\n", tmp);
}
return 0;
}