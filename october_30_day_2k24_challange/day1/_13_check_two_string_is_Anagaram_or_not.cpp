// preprocessor
#include <iostream>
#include <algorithm>
using namespace std;

bool isAnagram(string str1, string str2)
{
  if (str1.length() != str2.length())
  {
    return false;
  }
  string filterStr1, filterStr2;
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
  // now sort the  filterStr1 and filterStr2
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
  cout << "Enter the string str 2 :" << endl;
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