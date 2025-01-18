// preprocessor
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void isPermutation(string str1, string str2)
{
  if (str1.length() != str2.length())
  {
    cout << "Not a permutation" << endl;
  }
  vector<string> perm;
  perm.push_back(str1);
  while (next_permutation(str1.begin(), str1.end()))
  {
    perm.push_back(str1);
  }
  for (int i = 0; i < perm.size(); i++)
  {
    if (perm[i] == str2)
    {
      cout << "Yes it is a permutation" << endl;
      return;
    }
  }
  cout << "No it is not a permutation" << endl;
}

// main start here ...
int main()
{
  string str1, str2;
  cout << "Enter your string " << endl;
  cin >> str1;
  cout << "Enter your string " << endl;
  cin >> str2;
  isPermutation(str1, str2);
  return 0;
}