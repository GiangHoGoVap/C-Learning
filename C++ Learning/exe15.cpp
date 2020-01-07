#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;
const int MAX = 100;
struct student{
	char name[20];
	long int rollno;
	char sex;
	float height;
	float weight;
};
int main(){
    student cls[MAX];
    
    int i,n;
    float Sum_height,Sum_weight;
    cout << " How many names ? \n";
    cin >> n;
    for( i = 0; i <= (n-1); i++){
	cout << "record = "<< i+1 << endl;
	cout << "name : "; 
	cin>> cls[i].name;
	cout << "rollno : "; 
	cin>> cls[i].rollno;
	cout << "sex : "; 
	cin>> cls[i].sex;
	cout << "height : "; 
	cin>> cls[i].height;
	Sum_height += cls[i].height;
	cout << "weight : "; 
	cin>> cls[i].weight;
	Sum_weight += cls[i].weight;
	cout << endl;
    }
    cout << " Name " << setw(8) << " Rollno " << setw(8) << " Sex " << setw(8) << " Height " << setw(8) << " Weight " << endl;
    for( i = 0; i <= (n-1); i++){
    	cout << cls[i].name << setw(8) << cls[i].rollno << setw(8) << cls[i].sex << setw(8) << cls[i].height << setw(8) << cls[i].weight << endl;
	}
	cout << endl;
    cout << "Average height: " << Sum_height/i << endl;
	cout << "Average weight: " << Sum_weight/i << endl;
	return 0;
}

