#include <vector>
int cat(int humanYears){
if(humanYears==1)
return 15;
else if (humanYears==2)
return 24;
else
return ((humanYears-2)*4)+24;
}
int dog(int humanYears){
if(humanYears==1)
return 15;
else if (humanYears==2)
return 24;
else
return ((humanYears-2)*5)+24;
}
std::vector<int> humanYearsCatYearsDogYears(int humanYears) {
std::vector<int>v;
v.push_back(humanYears);
v.push_back(cat(humanYears));
v.push_back(dog(humanYears));
return v;
}
