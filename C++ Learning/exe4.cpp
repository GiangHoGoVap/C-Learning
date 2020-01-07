#include <iostream>
using namespace std;
float Sum(float arr[100], int size){

    double Sum = 0;
    for(int i = 0;i < size; i++)
    {
    	Sum = Sum +arr[i];
    
    }
    	return Sum;
    }
int main()
{
    int  N;
    float arr[N];
    cout << "Enter total number of elements: ";
    cin >> N;
    for(int i = 0; i < N; i++)
    {
       cout << "Enter Number " << N << " : ";
       cin >> arr[i];
    }
	cout << "The average of element is " << Sum(arr,N)/N;
    return 0;
}
