#include <vector>
using V = std::vector<int>;
int arrayPlusArray(std::vector<int> a, std::vector<int> b) {
int sum=0;
for(int i=0;i<a.size();i++)
 sum=sum+a[i];
for( int x=0;x<b.size();x++)
 sum=sum+b[x];
  return sum; // something went wrong
}
