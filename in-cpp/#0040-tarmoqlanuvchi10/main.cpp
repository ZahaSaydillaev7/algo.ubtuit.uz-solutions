#include <iostream>
#include <cmath>

using namespace std;
int main(){
    double x, y, z;
    cin >> x >> y >> z;
    if(x > 0){
        cout <<pow(x,2) <<" ";
    }
    else{
        cout <<x <<" ";
    };

    if(y > 0){
        cout <<pow(y,2) <<" ";
    }
    else{
        cout <<y <<" ";
    };

    if(x > 0){
        cout <<pow(z,2) <<" ";
    }
    else{
        cout <<z <<" ";
    };

    return 0;
}
