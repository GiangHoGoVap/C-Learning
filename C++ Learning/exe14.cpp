#include <iostream>
#include <string.h>
using namespace std;

int main(){
	int i, j;
	char str[25][25], temp[25];

	for (i = 1; i <= 3; i++)
	{
		cout << "String: ";
		cin >> str[i];
	}
	for (i = 1; i <= 3; i++)
	{
		for (j = i + 1; j <= 3; j++)
		{
			if (strcmp(str[i],str[j])>0)
			{
				strcpy(temp, str[i]);
				strcpy(str[i], str[j]);
				strcpy(str[j], temp);
			}
		}
	}
	cout << "Alphabetical order: ";
	for (i = 1; i <= 3; i++) 
	{
		cout << " " << str[i];
	}
	cout << endl;
	return 0;
}
