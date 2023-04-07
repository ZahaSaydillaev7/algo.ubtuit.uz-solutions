#include <iostream>
#include <cmath>

using namespace std;
int main() {
    int x, y;
    cin >>x >>y;
    cout.precision(2); cout << fixed;
    double z = log((pow((x+y),2) + sqrt(abs(y) + 2)) - (x - ((x*y) / ((pow(x,2)/2) - 5)))) + pow(cos (x + y), 2) / (cbrt(x+y));
    cout <<z <<endl;
    return 0;
}
