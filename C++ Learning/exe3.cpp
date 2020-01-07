#include <iostream>
using namespace std;
int main()
{   int N;
	int IntNum[N];
	int max;
	cout <<"how many numbers do you want ? ";
	cin>>N;
	for (int i=0;i<N;i++)
	{
	cout <<" Enter "<< N <<" numbers : ";
	cin>> IntNum[i];
	}
	max = IntNum[0];
	for(int i =1;i <= N-1;i++)
    {
    if(IntNum[i]>max)
    {
    max = IntNum[i];
    }
    }
	cout<<"The largest number is : "<<max;	
	return 0;
}
