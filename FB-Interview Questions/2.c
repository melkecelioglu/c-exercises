//#include <iostream>
#include <stdio.h>

//using namespace std;

int main()
{
	int nums[6];
	int sayi;
	
	//cout << "( _, _ ] , (_, _) , (_, _)" << endl;
	//cout << "IN: ";
	
	//cin >> sayi;
	nums[0] = sayi;
	
	//cin >> sayi;
	nums[1] = sayi;
	
	//cin >> sayi;
	nums[2] = sayi;
	
	//cin >> sayi;
	nums[3] = sayi;
	
	//cin >> sayi;
	nums[4] = sayi;
	
	//cin >> sayi;
	nums[5] = sayi;
	
	int i, min = 100, secMin = 100, max = 0, secMax = 0;
	for	(i = 0; i < 6; i++)
	{
		if (nums[i] < min)
			min = nums[i];
	}
	
	for	(i = 0; i < 6; i++)
	{
		if (nums[i] < secMin && nums[i] > min)
			secMin = nums[i];
	}
	
	for	(i = 0; i < 6; i++)
	{
		if (nums[i] > max)
			max = nums[i];
	}
	
	for	(i = 0; i < 6; i++)
	{
		if (nums[i] > secMin && nums[i] < max)
			secMax = nums[i];
	}
	
	
	//cout << min << " " << secMin;
	
	//cout << " , " << max << " " << secMax << endl;
	
}