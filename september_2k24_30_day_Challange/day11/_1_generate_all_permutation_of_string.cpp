// preprocessor
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<string> generateAllStringPermutation(string str)
{
  vector<string> result;
  result.push_back(str);
  while (next_permutation(str.begin(), str.end()))
  {
    result.push_back(str);
  }
  return result;
}

// use recursion to get the factorial of the number
int getFactorial(int n)
{
  if (n == 1)
  {
    return 1;
  }
  return n * getFactorial(n - 1);
}

int totalNumberOfPermutation(string str)
{
  int n = str.length();
  int fact = getFactorial(n);
  return fact;
}
// main start here ...
int main()
{
  string str;
  cout << "Enter your string :" << endl;
  cin >> str;
  cout << "You Enter string " << endl;
  vector<string> result = generateAllStringPermutation(str);
  cout << "Total number of permutation is :"<< str << " =>" << totalNumberOfPermutation(str) << endl;
  cout<<endl;
  cout << "[" ;
  for (auto it = result.begin(); it != result.end(); it++)
  {
    cout << *it <<" ,";
  }
  cout << "]" << endl;
  return 0;
}