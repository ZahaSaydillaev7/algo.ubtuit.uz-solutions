#include <iostream>
using namespace std;

int main() {
    int x, y, z;
    cin >> x >> y >> z;
    if (x + y > z && x + z > y && y + z > x) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    };
    return 0;
}
