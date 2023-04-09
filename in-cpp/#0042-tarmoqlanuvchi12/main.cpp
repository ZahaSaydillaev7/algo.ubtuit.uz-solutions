#include <iostream>

using namespace std;
int main(){
    float a, b, c, d;
    cin >>a >>b >>c >>d;
    if (a <= b && b <= c && c <= d){
        float max_result = max(a, max(b, max(c,d)));
        a = max_result; b = max_result; c = max_result, d = max_result;
        cout <<a <<" " <<b <<" " <<c <<" " <<d <<endl;
    }
    else{
        float min_result = min(a, min(b, min(c,d)));
        a = min_result; b = min_result; c = min_result, d = min_result;
        cout <<a <<" " <<b <<" " <<c <<" " <<d <<endl;
    };
    return 0;
};
