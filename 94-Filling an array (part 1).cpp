#include <vector>

std::vector<int> arr(int n = 0) {
  // the numbers 0 to N-1
  std::vector<int> vect;
  for(int i=0;i<n;i++){
    vect.push_back(i);
  }
  return vect;
}
