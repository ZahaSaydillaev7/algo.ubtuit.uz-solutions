#include <iostream>
#include <cmath>

using namespace std;
int main(){
   double a, b;
   cin >>a >>b;
   cout.precision(2); cout <<fixed;
   double t = pow(a, 1.0/5) + pow(b * (a + b) / (2*b + a*b),1.0/4) * (pow(a,2) + pow(b,2) + 2.0);
   cout <<t;
}
