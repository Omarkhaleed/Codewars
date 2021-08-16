#include<vector>
#include<algorithm>
using namespace std;

int sum(vector<int> numbers)
{
if(numbers.empty())
return 0;
else
 sort(numbers.begin(), numbers.end());
    int sum=0;  
    for (int i=1; i<numbers.size()-1; i++)
      sum+=numbers[i];
    return sum;
}
