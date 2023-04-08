#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int a; double x;
    cin >>a >>x;
    cout.precision(2); cout <<fixed;
    double a1 = sqrt(x-1.0) + sqrt(x+2.0) + log10( sqrt( a*pow(x,2) ) + 2.0 );
    double a2 = sqrt(x+2.0) + sqrt(x+24.0) + pow(x,5);
    double tt = a1 / sqrt(a2);
    cout <<tt;
    return 0;
}
