#include <vector>
using vec = std::vector<int>;
bool betterThanAverage(std::vector<int> classPoints, int yourPoints) {

  int sum = 0;
int ave;
  for(int i= 0; i < classPoints.size(); i++){
    sum = sum + classPoints[i];
  }
  ave = sum/classPoints.size();
  if(yourPoints >= ave){
  return true;
  }else{
  return false;
  }
}
