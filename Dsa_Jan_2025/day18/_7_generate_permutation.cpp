// preprocessor
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void generatePermutation(string str)
{
  if (str.length() == 1)
    return;
  vector<string> result;
  result.push_back(str);
  while (next_permutation(str.begin(), str.end()))
  {
    result.push_back(str);
  }
  for (int i = 0; i < result.size(); i++)
  {
    cout << result[i] << endl;
  }
}
// main start here ...
int main()
{
  string str;
  cout << "Enter your string " << endl;
  cin >> str;
  generatePermutation(str);
  return 0;
}