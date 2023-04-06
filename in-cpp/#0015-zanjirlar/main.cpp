#include <iostream>

using namespace std;
int main()
{
    double r1, r2, r3;
    cin >>r1 >>r2 >>r3;
    cout.precision(2); cout <<fixed;
    double r_total = 1.0 / (1.0/r1 + 1.0/r2 + 1.0/r3);
    cout <<r_total;
    return 0;
}
