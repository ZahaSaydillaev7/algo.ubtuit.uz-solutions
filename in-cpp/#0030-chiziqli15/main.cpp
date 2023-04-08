#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int x; double y, z;
    cin >>x >>y >>z;
    cout.precision(2); cout <<fixed;
    double a1 = pow(2,-x) * sqrt( x + pow(abs(y)+2, 1/4.0));
    double a2 = pow(( exp(x-1) / sin(z+2)) + 2, 1/3.0) ;
    double af = a1 * a2;
    cout <<af <<endl;
    return 0;
}
