// preprocessor
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void generateAllStringPermutation(string str)
{
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
  cout << "Enter the string :" << endl;
  cin >> str;
  cout<<"All the permutation of the string :"<<endl;
  generateAllStringPermutation(str);
  return 0;
}