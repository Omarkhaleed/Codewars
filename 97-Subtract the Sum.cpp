#include <string>
using namespace std;
  int sum(int num) {
    int num2 = num, add = 0;
    while (num2 > 0) {
        int rem = num2 % 10;
        add += rem;
        num2 /= 10;
    }
    int substract = num - add;
    if(substract>100){
       sum(substract);
}
   return substract;
    }
string SubtractSum(int n) {
  /*  string arr[] = { "kiwi","pear","kiwi","banana","melon","banana","melon","pineapple","apple",
       "pineapple","cucumber","pineapple","cucumber","orange","grape","orange","grape","apple","grape",
       "cherry","pear","cherry","pear","kiwi","banana","kiwi","apple","melon","banana","melon","pineapple",
       "melon","pineapple","cucumber","orange","apple","orange","grape","orange","grape","cherry","pear","cherry",
       "pear","apple","pear","kiwi","banana","kiwi","banana","melon","pineapple","melon","apple","cucumber",
       "pineapple", "cucumber","orange","cucumber","orange","grape","cherry","apple","cherry""pear","cherry",
       "pear", "kiwi","pear","kiwi","banana","apple","banana","melon","pineapple","melon","pineapple","cucumber",
       "pineapple", "cucumber","apple","grape","orange","grape","cherry","grape","cherry","pear","cherry",
       "apple","kiwi","banana","kiwi","banana","melon","banana","melon","pineapple","apple","pineapple" };
    int value=sum(n);
  return arr[value-1];
  */
  return ("apple");
}
