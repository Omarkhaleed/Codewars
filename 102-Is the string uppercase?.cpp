#include <string>
#include<cstring>
bool is_uppercase(const std::string &s) {
  int count=0;
  int num=s.length();
  for(int i=0;i<num;i++){
    if(s[i]>='a' && s[i]<='z')
      count++;
  }
  if(count>=1)
    return false;
  else
    return true;
}
