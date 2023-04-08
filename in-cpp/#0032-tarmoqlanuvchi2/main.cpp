#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    double x,y,z;
    cin >>x >>y >>z;
    double max_result = max(x, max(y,z));
    double min_result = min(x, min(y,z));
    cout <<max_result <<" " <<min_result <<endl;
    return 0;
}
