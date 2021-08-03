#include <string>

std::string fakeBin(std::string str){
  for (int i = 0; i < (int)str.length(); i++)
  {
    if ( str[i] == '0' || str[i] == '1' || str[i] == '2' || str[i] == '3' || str[i] == '4')
    {
      str[i] = '0';  
    }
    else 
    {
      str[i] = '1';
    }
  }
  return str;
}
