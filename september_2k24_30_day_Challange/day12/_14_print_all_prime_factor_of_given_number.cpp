// preprocessor
#include <iostream>
#include <vector>
using namespace std;

vector<int> getAllPrimeFactorOfNum(int num)
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
  vector<int> allPrime = getAllPrimeFactorOfNum(num);
  cout << "[";
  for (auto it = allPrime.begin(); it != allPrime.end(); it++)
  {
    cout << *it << " ";
  }
  cout << "]";

  return 0;
}