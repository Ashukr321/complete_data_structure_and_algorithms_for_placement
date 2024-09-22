// preprocessor
#include <iostream>
#include<algorithm>
using namespace std;

bool isAnagram(string str1, string str2)
{
  string filterStr1;
  string filterStr2;
  for (char c : str1)
  {
    if (isalnum(c))
    {
      filterStr1 += tolower(c);
    }
  }
  for (char c : str2)
  {
    if (isalnum(c))
    {
      filterStr2 += tolower(c);
    }
  }
  sort(filterStr1.begin(), filterStr1.end());
  sort(filterStr2.begin(), filterStr2.end());
  return filterStr1 == filterStr2;
}
// main start here ...
int main()
{
  string str1, str2;
  cout << "Enter your string   1 " << endl;
  cin >> str1;
  cout << "Enter your 2nd string :" << endl;
  cin >> str2;
  if (isAnagram(str1, str2))
  {
    cout << "Both strings are anagram" << endl;
  }
  else
  {
    cout << "Both strings are not anagram" << endl;
    ;
  }

  return 0;
}