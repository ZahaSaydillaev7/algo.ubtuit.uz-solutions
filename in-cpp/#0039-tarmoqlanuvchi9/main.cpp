#include <iostream>
using namespace std;
int main(){
    double x, y;
    cin >>x >>y;
    cout.precision(1); cout <<fixed;
    if(x<y)
        cout <<(x+y)/2 <<" " <<x*y*4;
    else
        cout <<x*y*4 <<" " <<(x+y)/2;
    return 0;
}
