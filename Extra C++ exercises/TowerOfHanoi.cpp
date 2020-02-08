//C++ program to solve tower of hanoi puzzle
#include <iostream>
using namespace std;

void move(int n, char source, char destination, char auxiliary){
	static int step=0;
	if (n==1) cout << "Step " << ++step << " move from " << source << " to " << destination << endl;
	else{
		move(n-1, source, auxiliary, destination);
		move(1, source, destination, auxiliary);
		move(n-1, auxiliary, destination, source);
	}
	return;
}

int main(){
 	int numDisks;
 	cout << "Please enter number of disks: " << endl;
 	cin >> numDisks;
 	cout << "Start tower of Hanoi: " << endl;
 	move(numDisks, 'A' , 'C' , 'B');
 	return 0;
}
