#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n; double s = 0;
    cin >>n;
    cout.precision(2); cout <<fixed;
    for(int i=1; i<=n; i++){
        s += pow(-1, i-1)*sin(pow(i,i)) / pow(2,i);
    }
    cout <<s;
    return 0;
}
