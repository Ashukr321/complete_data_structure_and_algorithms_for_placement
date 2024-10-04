// preprocessor
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int CountChar(string str)
{
  int cd = 0;
  for (char c : str)
  {
    cd++;
  }
  return cd;
}
int factorial(int n)
{
  // base case
  if (n == 1)
  {
    return 1;
  }
  return n * factorial(n - 1);
}

void generateAllPermutation(string str)
{
  int countChar = CountChar(str);
  int totalPermutation = factorial(countChar);
  cout << "the total number of permutation is : " << totalPermutation << endl;
  vector<string> allPermutation;
  allPermutation.push_back(str);
  while (next_permutation(str.begin(), str.end()))
  {
    allPermutation.push_back(str);
  }
  cout << "[" << " ";
  for (auto it = allPermutation.begin(); it != allPermutation.end(); it++)
  {
    cout << *it << " ";
  }
  cout << "]" << " ";
}

// main start here ...
int main()
{
  string str;
  cout << "Enter the string :" << endl;
  cin >> str;
  generateAllPermutation(str);
  return 0;
}