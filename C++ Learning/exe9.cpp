#include <iostream>
#include<iomanip>
#include<math.h>
using namespace std;
const float pi = 3.14159265;
int main(){
    cout <<"x (degree)"<<setw(18)<<"sin(x)"<<setw(20)<<"cos(x)"<<setw(20)<<"tan(x)"<<endl;
    for(int i = 5;i<= 85; i+=5){
	cout<<i<<setw(29)<<sin(i*pi/180)<<setw(18)<<cos(i*pi/180)<<setw(22)<<tan(i*pi/180)<<endl;
    }
    return 0;
}
