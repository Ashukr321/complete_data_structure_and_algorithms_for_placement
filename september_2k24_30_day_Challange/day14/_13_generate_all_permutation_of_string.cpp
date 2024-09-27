// preprocessor
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> generateAllStringPerm(string str)
{
  vector<string> result;
  result.push_back(str);
  while (next_permutation(str.begin(), str.end()))
  {
    result.push_back(str);
  }
  return result;
}

// main  start here ...
int main()
{
  string str;
  cout << "Enter string :" << endl;
  cin >> str;
  vector<string> permutation = generateAllStringPerm(str);

  cout << "[";
  for (auto it = permutation.begin(); it != permutation.end(); it++)
  {
    cout << *it << " ,";
  }
  cout << "]";

  return 0;
}