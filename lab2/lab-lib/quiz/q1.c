/*int asalMi(int sayi)
{
	int i;
	for(i=2;i<=sayi/2;i++)
	{
		if(sayi%i!=0)
			continue;
		else
			return 1;
	}
	return 0;
}

int altKumeleriAsalMi(int sayi)
{
    while (sayi > 0)
    {
        if (asalMi(sayi))
        {
            sayi /= 10;
        }
        else
        {
            return 0;
        }
    }
    return 1;
}



int asalMi(int sayi)
{

    int i;
    for (i = 2; i <= sayi / 2; i++)
    {
        if (sayi % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int altKumeleriAsalMi(int sayi)
{
    if(sayi < 100){

        return 0;
}
    while (sayi > 0) {
        if (asalMi(sayi))

        {
            sayi /= 10;
        }
        else
        {
            return 0;
        }

    }
    return 1;
}


*/
#include <stdio.h>

int asalMi(int sayi)
{
	int i;
	
	for(i = 2; i < sayi; i++)
	{
		if (sayi % i == 0)
		{
			return 0;
		}
	}
	
	return 1;
}

int altKumeleriAsalMi(int sayi)
{	
	while(sayi > 0)
	{
		if (asalMi(sayi) == 0)
			return 0;
			
		sayi = sayi / 10; 
	}	
	
	return 1;
}

int main()
{
	int sayi;
	
	printf("sayi = ");
	scanf("%d", &sayi);
	
	if (altKumeleriAsalMi(sayi) == 1)
	{
		printf("alt kumeler asal");
	}
	else
	{
		printf("alt kumeler asal degil");
	}
}