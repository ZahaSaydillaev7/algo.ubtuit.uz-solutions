#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int a;
    double x, y;
    cin >>a >>x >>y;
    cout.precision(2); cout <<fixed;
    double a1 = exp(x*y) - x * sin(a*x) - ( (pow(x,2) + 2) / (abs(x) + 5) );
    double a2 = log(pow(x,2) + 2) + 5;
    double w2 = sqrt(a1) + sqrt(a2);
    cout <<w2;
    return 0;
}
