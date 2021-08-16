#include<string>
using namespace std;

string bonus_time(int salary, bool bonus)
{

    if(bonus==1)
    return "$"+to_string(salary*10);
    else
    return "$"+to_string(salary);
}
