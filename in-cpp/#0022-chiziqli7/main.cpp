#include <iostream>
#include <cmath>

using namespace std;
int main() {
    double x1, x2;
    double c, d;
    cin >>x1 >>x2 >>c >>d;
    cout.precision(2); cout <<fixed;
    double f = (pow(sin((c * pow(x2,3)) + (d * pow(x1,3)) - (c * d)),2) / sqrt((c * pow(x1,2)) + (d * pow(x2,2)) + 7)) + tan(x1 * pow(x2,2) + pow(d,3));
    cout <<f;
}
