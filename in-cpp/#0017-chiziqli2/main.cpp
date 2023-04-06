#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    double x, y;
    cin >>x >>y;
    double a = 2.0 * tan(x + (acos(-1) / 6));
    double b = (1.0/3.0) + pow(cos(y + pow(x, 2)), 2.0);
    double c = log2(pow(x,2) + 2.0);
    cout.precision(2); cout <<fixed;
    double f1 = (a / b) + c;
    cout <<f1;
    return 0;
}
