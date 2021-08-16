#include<string>
std::string abbrevName(std::string name)
{
std::string s;
s.push_back(toupper(name[0]));
s.push_back('.');
s.push_back(toupper(name[name.find(' ')+1]));
return s;
}
/*std::string ret;
  ret.push_back(toupper(name[0]));
  ret.push_back('.');
  ret.push_back(toupper(name[name.find(' ') + 1] ));
  return ret;
  */
