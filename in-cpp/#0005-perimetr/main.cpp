#include <iostream>
#include <cmath>

using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    double perimeter = (a + b + c) / 2.0;
    cout.precision(2);cout<<fixed;
    cout <<perimeter;

    return 0;
}
