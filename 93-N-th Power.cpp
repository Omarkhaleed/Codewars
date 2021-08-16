#include <vector>
#include <cmath>
int index(const std::vector<int> &vector, int n) {
  int v=vector.size();
  if(n>=v){
    return -1;
  }
  int result;
    for(int i=0;i<v;i++){
      if(i==n){
        result = pow(vector[i],i);
        }
    }
  return result;
      //return -1;
  }
