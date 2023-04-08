#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int a; double x, y;
    cin >>a >>x >>y;
    cout.precision(2); cout <<fixed;
    double a1 = pow(y,2) + exp(x) + sqrt(exp(x) + (a / (pow(x,2) + 2) )) + (pow(cos(x),2) / sin(pow(x,2)));
    double a2 = pow(cos(x),3);
    double tt = sqrt(a1) + a2;
    cout <<tt <<endl;
    return 0;
}
