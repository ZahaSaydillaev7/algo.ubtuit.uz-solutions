#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c; double x;
    cin >> a >>b >>c >>x;
    cout.precision(2); cout <<fixed;
    double w1 = 0.75 + ( (8.2 * pow(x,2)) + (sqrt( abs( pow(x,3) + 3*x ) + cos(x-2.0) ) ) )/ ( (a/4.0) + (b/3.0) + (c/2.0) + 1.0 );
    cout <<w1 <<endl;
    return 0;
}
