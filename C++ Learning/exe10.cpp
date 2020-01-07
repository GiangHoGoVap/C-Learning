#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double euler(int n)
{
    return pow((1+1.0/n), n);
}

int main()
{
    int trialN = 4;

    double temp1, temp2;

    temp1 = euler(1);
    temp2 = euler(2);

    while(  abs(temp1-temp2) > 1e-6 )
    {
        temp1 = temp2;
        temp2 = euler( trialN );
        trialN*=2;
    }

    cout<<setprecision(8)<<"e is approximately "<<temp2;
    return 0;
}

