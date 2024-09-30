// preprocessor
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> generateAllPermutation(string str)
{
  vector<string> result;
  result.push_back(str);
  while (next_permutation(str.begin(), str.end()))
  {
    result.push_back(str);
  }
  return result;
}
// main start here ...
int main()
{
  string str1, str2;
  cout << "Enter your string str1 " << endl;
  cin >> str1;
  cout << "Enter your string str2 " << endl;
  cin >> str2;
  vector<string> allStringPermutation = generateAllPermutation(str1);
  bool isPermutation = false;
  for (auto it = allStringPermutation.begin(); it != allStringPermutation.end(); it++)
  {
    if (*it == str2)
    {
      isPermutation = true;
      break;
    }
    isPermutation = false;
  }
  if (isPermutation)
  {
    cout << "str1 and str2 are permutation of each other" << endl;
  }
  else
  {
    cout << "str1 and str2 are not permutation of each other" << endl;
  }

  return 0;
}