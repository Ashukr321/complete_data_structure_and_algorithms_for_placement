// preprocessor
#include <iostream>
#include <algorithm>
using namespace std;

bool anagram(string str1, string str2)
{
  string filterString1, filterString2;
  for (char c : str1)
  {
    if (isalnum(c))
    {
      filterString1 += tolower(c);
    }
  }
  for (char c : str2)
  {
    if (isalnum(c))
    {
      filterString2 += tolower(c);
    }
  }

  // sort the both filterString
  sort(filterString1.begin(), filterString1.end());
  sort(filterString2.begin(), filterString2.end());

  return filterString1 == filterString2;
}

// main start here ...
int main()
{
  string str1, str2;
  cout << "Enter the string  1: ";
  cin >> str1;
  cout << "Enter the string 2:";
  cin >> str2;
  if (anagram(str1, str2))
  {
    cout << "\nThe strings are anagrams.";
  }
  else
  {
    cout << "\nThe strings are not anagrams.";
  }
  return 0;
}