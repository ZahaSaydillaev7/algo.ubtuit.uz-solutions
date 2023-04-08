#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    double x,y;
    cin >>x >>y;
    double min_result = min(x,y);
    double max_result = max(x,y);
    cout <<max_result <<" " <<min_result <<endl;
    return 0;
}
