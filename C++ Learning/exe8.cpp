#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int i = 0;
	double pi = 0, n = 0;
	while (fabs(n) > 0.000001 || n == 0){
		n = fabs(pow(2 * i + 1, -1));
		if (i % 2 == 0){
			pi += n;
		}
		if (i % 2 == 1){
			pi -= n;
		}
		i++;
	}
	
	cout << "Pi is " << pi * 4 << endl;
	return 0;
}
