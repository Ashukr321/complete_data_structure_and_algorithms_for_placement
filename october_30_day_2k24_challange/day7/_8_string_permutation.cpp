// preprocessor
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void stringPermutation(string str)
{
  if (str.length() == 1)
    return;
  vector<string> result;
  result.push_back(str);
  while (next_permutation(str.begin(), str.end()))
  {
    result.push_back(str);
  }

  for (auto it = result.begin(); it != result.end(); it++)
  {
    cout << *it << " ";
  }
}

// main start here ...
int main()
{
  string str;
  cout << "Enter your string : " << endl;
  cin >> str;
  stringPermutation(str);
  return 0;
}