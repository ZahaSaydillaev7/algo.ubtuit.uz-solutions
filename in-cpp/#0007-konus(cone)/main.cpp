#include <iostream>
#include <cmath>

using namespace std;
int main(){
    int h, r;
    cin >>h >>r;
    double v = (1.0/3.0) * acos(-1) * pow(r,2) * h;
    cout.precision(2); cout <<fixed;
    cout <<v;
    return 0;
}
