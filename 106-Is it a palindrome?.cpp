#include <string>
#include<bits/stdc++.h>
bool isPalindrom (const std::string& str)
{
  //another solution note focus on const and case sensitive
  std::string ss=str;
   int low = 0;
    int high = str.length() - 1;
  transform(ss.begin(), ss.end(), ss.begin(), ::toupper);
    while (low < high)
    {
        // if mismatch happens
        if (ss[low] != ss[high])
            return false;
 
        low++;
        high--;
    }
 
    return true;
}
