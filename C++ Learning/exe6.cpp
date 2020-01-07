#include <iostream>
using namespace std;
int main(){
	int n,array[n];
	int Pos=0;
	int Neg=0;
	cout << "How many numbers do you want? ";
	cin >> n;
	for (int i=0;i<n;i++){
		cout << "Enter number ";
		cin >> array[i];
	}
	for (int i=0;i<n;i++){
		if (array[i]>0){
		Pos++;
	    }
		else if(array[i]<0) Neg++;
	}
	cout << "The number of positive numbers is " << Pos << endl;
	cout << "The number of negative numbers is " << Neg << endl;
	return 0;
}
