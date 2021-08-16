#include <string>

std::string makeUpperCase (const std::string& su)
{
   std::string s=su;
    std::transform(s.begin(), s.end(), s.begin(),::toupper);
    return s;
  
}
