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
  string str;
  cout << "Enter your string :" << endl;
  cin >> str;

  vector<string> result = generateAllPermutation(str);
  cout << "[" << " ";
  for (auto it = result.begin(); it != result.end(); it++)
  {
    cout << *it << " ";
  }

  cout << "]" << " ";

  return 0;
}