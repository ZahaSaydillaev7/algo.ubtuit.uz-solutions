#include <iostream>
#include <cmath>

using namespace std;
int main() {
    int a, b, c, d;
    double x;
    cin >>a >>b >>c >>d >>x;
    cout.precision(2); cout <<fixed;
    double y2 = ( (a*pow(x,2)) + b*x + c ) / ( (x*pow(a,3)) + pow(a,2) + pow(a,(b-c)) ) + cos( ( a*x + b ) / (c*x + d + pow(2,c)) );
    cout <<y2 <<endl;
    return 0;
}
