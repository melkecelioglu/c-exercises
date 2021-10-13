//#include <iostream>
#include <stdio.h>
//using namespace std;

int main()
{
	string word, newWord = "";
	
	//cout << "IN: ";
	//cin >> word;
	
	int i, j;
	for	(i = 0; i < word.length() - 1; i++)
	{
		if (word[i] != word[i + 1])
			newWord += word[i];
		else
		{
			while(word[i] == word[i + 1])
				i++;
		}
	}
	
	if (word[i] != word[i - 1])
		newWord += word[i];
	
	
	//cout << "OUT: " << newWord << endl;
}