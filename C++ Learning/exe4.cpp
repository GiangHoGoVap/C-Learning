#include <iostream>
using namespace std;

float sum(float arr[100], int size){
    double totalSum = 0;
    for (int i = 0; i < size; i++)
    {
    	totalSum += arr[i];
    
    }
    return totalSum;
}

int main()
{
    int  N;
    cout << "Enter total number of elements: ";
    cin >> N;
    float arr[N];
    for (int i = 0; i < N; i++)
    {
       cout << "Enter [" << i << "] number: ";
       cin >> arr[i];
    }
	cout << "The average of element is " << sum(arr, N)/N << endl;
    return 0;
}
