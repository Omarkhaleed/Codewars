#include <string>
using namespace std;
string multi_table(int number)
{
  string str = "";
  for(int i = 1; i <= 10; i++){
    str += (to_string(i) + " * " + to_string(number) + " = " + to_string(i * number) +(i == 10 ? "" :"\n"));
  }
  return str;
}
