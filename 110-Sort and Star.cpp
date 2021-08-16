#include<algorithm>
#include<string>
std::string twoSort(std::vector<std::string> s)
{
   std::string result = *min_element(s.begin(), s.end());
    for (int i = 1; i < result.size(); i += 4)
      result.insert(i, "***");
    return result;
       
  }
