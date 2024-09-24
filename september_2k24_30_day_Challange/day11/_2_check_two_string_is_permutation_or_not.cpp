// preprocessor
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool checkPermutation(string str1, string str2)
{
  // check best case
  if (str1.length() != str2.length())
  {
    return false;
  }

   vector<string> result;

  result.push_back(str1);

  while (next_permutation(str1.begin(), str1.end()))
  {
    result.push_back(str1);
  }

  for (auto it = result.begin(); it != result.end(); it++)
  {
    if (*it == str2)
    {
      return true;
    }
  }
  return false;
}

// main start here ...
int main()
{
  string str1, str2;
  cout << "Enter your  first string :" << endl;
  cin >> str1;
  cout << "Enter your 2nd string " << endl;
  cin >> str2;
  if (checkPermutation(str1, str2))
  {
    cout << "Both strings are permutation of each other" << endl;
  }
  else
  {
    cout << "Both strings are not permutation of each other" << endl;
  }

  return 0;
}