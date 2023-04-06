#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    double x, y;
    cin >>x >>y;
    cout.precision(2); cout <<fixed;
    double c1 = (x + y) / (pow(y,2) + abs(pow(y,2) + 2) / (x + pow(x,3) / 5)) + exp(y + 2);
    cout <<c1;
    return 0;
}
