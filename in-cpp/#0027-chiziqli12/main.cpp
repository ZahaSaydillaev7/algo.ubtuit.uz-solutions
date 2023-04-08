#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    double x;
    cin >>x;
    cout.precision(2); cout <<fixed;
    double a1 =  ((2*tan(x+2.0)) - (cos(x + pow(2,x)))) / (1.0 + pow(cos(x+2),2));
    double a2 = sin(pow(x,2)) / pow(x,2) + 0;
    double aa = sqrt(a1) + a2;
    cout <<aa <<endl;
    return 0;
}
