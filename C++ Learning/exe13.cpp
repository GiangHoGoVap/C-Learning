#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	float hourly_rates[]={9.5,6.4,12.5,5.5,10.5};
	float array1[5];
	float wages;
	int i;
	for ( i=0;i<5;i++){
		cout << "Enter 5 working hours ";
	    cin >> array1[i];
	}
	cout << " wages " << setw(8) << " hourly_rates " << setw(8) << " working_hours " << endl;
	for ( i=0;i<5;i++){
		wages=hourly_rates[i]*array1[i];
		cout << wages << setw(13) << hourly_rates[i] << setw(15) << array1[i] << endl;
	}
	return 0;
}
