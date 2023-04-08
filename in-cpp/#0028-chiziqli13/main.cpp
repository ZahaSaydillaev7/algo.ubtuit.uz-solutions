#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int a; double x;
    cin >>a >>x;
    cout.precision(2); cout <<fixed;
    double a1 = x * sin( (x/2) + (x/3) + (x/4) );
    double a2 = log10(pow(x,2) - 2) + pow(3,a);
    double a3 = cos(x+3) * sin(x+3) + 8;
    double bb1 = a1 + ( a2/a3 );
    cout <<bb1;
    return 0;
}
