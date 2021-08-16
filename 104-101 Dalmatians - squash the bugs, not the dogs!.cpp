#include<vector>
#include <string>

std::string howManyDalmatians( int number){
  std::vector<std::string> dogs{ "Hardly any", "More than a handful!", "Woah that's a lot of dogs!", "101 DALMATIONS!!!" };
  std::string vvv="";
  if(number<=10)
    vvv= dogs[0];
   else if(number<=50)
    vvv=dogs[1];
   else if(number==101)
    vvv=dogs[3];
   /* else if(number>=80)
    vvv=dogs[2];
    */
  else{
    return dogs[2];
    }
  return vvv;
   
  }
