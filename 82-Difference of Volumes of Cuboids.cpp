#include <array>
#include<cmath>

int findDifference(std::array<int, 3> a, std::array<int, 3> b) {
int s=1,s2=1;
  for(int i=0;i<a.size();i++)
  s*=a[i];
  for(int i=0;i<b.size();i++)
  s2*=b[i];
  return abs(s2-s);
}
