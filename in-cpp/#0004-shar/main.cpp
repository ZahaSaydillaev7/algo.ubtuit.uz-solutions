#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int r;
    cin >> r;
    cout.precision(2); cout <<fixed;
    double surface_area = 4 * acos(-1) * pow(r, 2);
    cout << surface_area;
    return 0;
}
