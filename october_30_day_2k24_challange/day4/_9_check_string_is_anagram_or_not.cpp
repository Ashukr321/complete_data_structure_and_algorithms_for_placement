// preprocessor
#include <iostream>
#include <algorithm>
using namespace std;

bool isAnagram(string str1, string str2)
{
  string filterStr1, filterStr2;
  for (char ch : str1)
  {
    if (isalnum(ch))
    {
      filterStr1 += tolower(ch);
    }
  }

  for (char ch : str2)
  {
    if (isalnum(ch))
    {
      filterStr2 += tolower(ch);
    }
  }

  // sort the   filter string
  sort(filterStr1.begin(), filterStr1.end());
  sort(filterStr2.begin(), filterStr2.end());
  return filterStr1 == filterStr2;
}
// main start here ...
int main()
{
  string str1, str2;
  cout << "Enter the string str1 " << endl;
  cin >> str1;
  cout << "Enter the string str 2" << endl;
  cin >> str2;
  if (isAnagram(str1, str2))
  {
    cout << "The strings are anagram" << endl;
  }
  else
  {
    cout << "The strings are not anagram" << endl;
  }

  return 0;
}