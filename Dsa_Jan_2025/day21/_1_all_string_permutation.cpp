// preprocessor
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void allPermutation(string str)
{
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
  cout << "Enter the the string :" << endl;
  cin >> str;
  allPermutation(str);
  
  return 0;
}