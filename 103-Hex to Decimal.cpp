using namespace std; 
#include<cmath>
int hexToDec(std::string hexString)
{
  int sum = 0;
  int b = 0;
  
  for (int i = hexString.length() - 1; i >= 0; i--) {
    
    if (hexString[i] >= '0' && hexString[i] <= '9') {
      int val = (int)hexString[i] - 48;
      sum += val * (pow(16, b));
    } 
    
    else if (toupper(hexString[i]) >= 'A' && toupper(hexString[i]) <= 'F') {
      int val = (int)toupper(hexString[i]) - 55;
      sum += val * (pow(16, b));
    }
    
    else if (hexString[i] == '-') sum *= -1;
    
    b++;
  }
  return sum;
}
