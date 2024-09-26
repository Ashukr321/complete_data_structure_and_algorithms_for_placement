// preprocessor
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void generateAllPermutations(string str1)
{
  vector<string> result;
  result.push_back(str1);
  while (next_permutation(str1.begin(), str1.end()))
  {
    result.push_back(str1);
  }
  for (auto it = result.begin(); it != result.end(); it++)
  {
    cout << *it << endl;
  }
}

// main start here ...
int main()
{
  string str;
  cout << "Enter your string :" << endl;
  cin >> str;
  generateAllPermutations(str);
  return 0;
}