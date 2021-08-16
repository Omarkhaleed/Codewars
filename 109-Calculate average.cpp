#include <vector>

double calcAverage(const std::vector<int>& values){
double sum=0.0;
std::vector<int>v=values;
  for(int x=0;x<v.size();x++){
  sum+=v[x];
}
  double result= sum/v.size();
return result;
}
