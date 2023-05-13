#include <iostream>
#include <cmath>

using namespace std;
int main(){
    int n, x;
    double sum = 0;
    cout.precision(3); cout <<fixed;
    cin >>n >>x;
    for(int i=1; i<=n; i++){
        sum += pow((-1),i-1)/pow(x,(2*i));
    }
    cout <<sum;
    return 0;
}
