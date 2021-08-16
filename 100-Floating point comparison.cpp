#include <cmath>
using namespace std;

bool approx_equals(double a, double b) {
 // double aa=round(a*1000);
 // double bb=round(b*1000);
  double substract=abs(a-b);
  if(substract<0.001)
    return true;
  else
    return false;
}
