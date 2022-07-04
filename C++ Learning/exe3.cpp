#include <iostream>
using namespace std;

int main()
{   
	int N, max;
	cout << "How many numbers do you want? ";
	cin >> N;
	int arr[N];
	for (int i = 0; i < N; i++)
	{
		cout << "Enter ["<< i <<"] number: ";
		cin >> arr[i];
	}
	max = arr[0];
	for (int i = 1; i <= N - 1; i++)
    {
    	if (arr[i] > max)
    	{
    		max = arr[i];
    	}
    }
	cout << "The largest number is: " << max << endl;	
	return 0;
}
