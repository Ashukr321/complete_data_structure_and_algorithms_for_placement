// preprocessor
#include <iostream>
#include <algorithm>
using namespace std;

bool isAnagram(string str1, string str2)
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

  sort(filterString1.begin(), filterString1.end());
  sort(filterString2.begin(), filterString2.end());
  return filterString1 == filterString2;
}

// main start here ...
int main()
{
  string str1, str2;
  cout << "Enter your first string " << endl;
  cin >> str1;
  cout << "Enter your second string " << endl;
  cin >> str2;
  if (isAnagram(str1, str2))
  {
    cout << "The strings are anagrams of each other" << endl;
  }
  else
  {
    cout << "The strings are not anagrams of each other" << endl;
  }
  return 0;
}