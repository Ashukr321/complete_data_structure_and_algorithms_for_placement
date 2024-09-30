// preprocessor
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void generateAllStrPermutation(string str)
{
  vector<string> stringPermutation;
  stringPermutation.push_back(str);
  while (next_permutation(str.begin(), str.end()))
  {
    stringPermutation.push_back(str);
  }
  cout << "[";
  for (auto it = stringPermutation.begin(); it != stringPermutation.end(); it++)
  {
    cout << *it << " ";
  }
  cout << "]" << endl;
}

// main start here ...
int main()
{
  string str;
  cout << "Enter your string :" << endl;
  cin >> str;
  generateAllStrPermutation(str);

  return 0;
}