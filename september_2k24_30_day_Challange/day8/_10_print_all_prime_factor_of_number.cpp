// preprocessor
#include <iostream>
#include <vector>
using namespace std;

vector<int> getAllPrimeFactors(int num)
{
  vector<int> result;
  for (int i = 2; i < num; i++)
  {
    if (num % i == 0)
    {
      result.push_back(i);
    }
  }
  return result;
}

// main start here ...
int main()
{
  int num;
  cout << "Enter your number :" << endl;
  cin >> num;

  vector<int> v = getAllPrimeFactors(num);
  for (auto it = v.begin(); it != v.end(); it++)
  {
    cout << *it << " ";
  }
  return 0;
}