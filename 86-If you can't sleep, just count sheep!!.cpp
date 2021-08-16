#include <string>

std::string countSheep(int number) {
  std:: string s2="";
  for(int i=1;i<=number;i++){
  s2+=std:: to_string(i)+" sheep...";
}
return s2;
}
