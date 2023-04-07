#include <iostream>
#include <cmath>

using namespace std;
int main() {
    double x, y;
    cin >>x >>y;
    cout.precision(2); cout << fixed;
    double T11 = (pow(x, 2) + 1) / (pow(x, 2) + ((x * y + pow(y, 2)) / (pow(y, 2) + (y + x * y) / (abs(x * y) + 5)))) + (1 / (1 + cos(x) + 1 / sin(abs(x))));
    cout << T11 << endl;
    return 0;
}
