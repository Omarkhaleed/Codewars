#include <string>

bool feast(std::string beast, std::string dish){
  //your code here
  // simole solution with functions of strings
return beast.front()==dish.front() && beast.back()==dish.back();
  }
