//C++ program to print the Lucas series
#include <iostream>
using namespace std;
int main(){
	int n, t1, t2, t3;
	t1 = 2;
	t2 = 1;
	cout << "Enter the numbers of series: ";
	cin >> n;
	if (n<0) cout << "Error" << endl;
	else if (n<2){
		cout << "1" << endl;
	}
	else if (n==2){
		cout << "2" << " " << "1" << endl;
	}
	else{
		cout << "2" << " " << "1" << " ";
		for (int i=0;i<n-2;i++){
			t3 = t1 + t2;
			cout << t3 << " " ;
			t1 = t2;
			t2 = t3;
		}
	}
	return 0;
}
