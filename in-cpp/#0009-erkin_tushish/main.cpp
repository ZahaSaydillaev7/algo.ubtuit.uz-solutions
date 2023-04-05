#include <iostream>
#include <cmath>

using namespace std;
int main() {
    int h;
    cin >> h;
    double g = 9.8;
    double t = sqrt(2 * h / g);
    cout.precision(2); cout <<fixed;
    cout <<t;
    return 0;
}
