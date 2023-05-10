#include <iostream>
#include <cmath>
using namespace std;

using namespace std;
int main(){
    double x, y, z;
    cin >>x >>y >>z;
    cout.precision(2); cout <<fixed;
    cout <<max(max(x+y+z, x), max(y, z)) <<" " <<min(min(x+y/2, x), min(y, z)) * min(min(x+y/2, x), min(y, z));
    return 0;
}
