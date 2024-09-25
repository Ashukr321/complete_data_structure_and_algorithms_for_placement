#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> generateAllPermutations(string str1)
{
  vector<string> result;
  result.push_back(str1);
  while (next_permutation(str1.begin(), str1.end()))
  {
    result.push_back(str1);
  }
  return result;
}

int main()
{
  string str1, str2;
  cout << "Enter your string str1 :/" << endl;
  cin >> str1;
  cout << "Enter your string str2 :" << endl;
  cin >> str2;
  vector<string> allStrPerm = generateAllPermutations(str1);

  bool perm = false;
  for (auto it = allStrPerm.begin(); it != allStrPerm.end(); it++)
  {
    if (*it == str2)
    {
      perm = true;
      break; // exit the loop once a match is found
    }
  }
  if (perm)
  {
    cout << "str2 is a permutation of the str1" << endl;
  } else {
    cout << "str2 is not a permutation of the str1" << endl;
  }

  return 0;
}