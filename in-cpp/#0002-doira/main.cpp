#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int r1, r2, r3;
    cin >>r1 >>r2 >>r3;
    cout.precision(2);
    cout << fixed;
    cout << acos(-1)*pow(r1,2)<< endl;
    cout << acos(-1)*pow(r2,2)<< endl;
    cout << acos(-1)*pow(r3,2);
}
