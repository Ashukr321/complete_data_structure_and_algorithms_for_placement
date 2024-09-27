// preprocessor
#include <iostream>
#include <algorithm>
using namespace std;

bool isPermutation(string str1, string str2)
{
  // worst case
  if (str1.length() != str2.length())
  {
    return false;
  }
  string sortedStr1 = str1;
  string sortedStr2 = str2;
  sort(sortedStr1.begin(), sortedStr1.end());
  sort(sortedStr2.begin(), sortedStr2.end());
  return sortedStr1 == sortedStr2;
}
// main start here ...
int main()
{
  string str1, str2;
  cout << "Enter string 1 :" << endl;
  cin >> str1;
  cout << endl;
  cout << "Enter string 2" << endl;
  cin >> str2;
  if (isPermutation(str1, str2))
  {
    cout << "Both strings are permutation of each other" << endl;
  }
  else
  {
    cout << "Both strings are not permutation of each other" << endl;
  }
  return 0;
}