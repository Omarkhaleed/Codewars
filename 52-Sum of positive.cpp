#include <vector>

int positive_sum (const std::vector<int> arr){
  int sum=0;
 for(int i=0;i<arr.size();i++)
 if(arr[i]>0)
 sum+=arr[i];
 if(arr.empty())
 return 0;
 else
 return sum;
}
 
