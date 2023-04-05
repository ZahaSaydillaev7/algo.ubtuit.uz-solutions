#include <iostream>
#include <cmath>

using namespace std;
int main() {
    double area, height;
    cin >>area >>height;
    cout.precision(2); cout <<fixed;
    double base = (2 * area) / height;
    cout << base;
    return 0;
}
