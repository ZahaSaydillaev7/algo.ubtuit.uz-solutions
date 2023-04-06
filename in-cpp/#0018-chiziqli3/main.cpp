#include <iostream>
#include <cmath>

using namespace std;
int main () {
  double x,y;
  cout.precision(2); cout<<fixed;
  cin>>x>>y;
  double a = 1.0 / (x + (2.0 / pow(x,2)) + (3.0/pow(x,3))) + exp(pow(x,2) + 3.0 * x);
  double b = atan(x+y) + abs(pow((5.0 + x),2));
  double c = pow(cos(pow(y,2) + pow(x,2) / 2.0),2);
  cout<<a/b-c;
  return 0;
}
