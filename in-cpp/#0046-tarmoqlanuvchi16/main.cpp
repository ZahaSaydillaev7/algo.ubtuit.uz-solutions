#include <iostream>
using namespace std;

int main(){
    double a, y;
    cin >>a;
    if(a < -1) y = 1/(a*a);
    else if(a < 2) y = a*a;
    else y=4;
    cout.precision(2); cout <<fixed;
    cout <<y;
}
