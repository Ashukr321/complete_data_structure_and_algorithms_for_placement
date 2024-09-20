// preprocessor
#include <iostream>
#include <vector>
using namespace std;

// isPrime
bool isPrime(int num)
{
  for (int i = 2; i < num; i++)
  {
    if (num % i == 0)
    {
      return false;
    }
  }
  return true;
}
vector<int> getAllPrimeNum(int start, int end)
{
  vector<int> result;
  for (int i = start; i < end; i++)
  {
    if (isPrime(i))
    {
      result.push_back(i);
    }
  }
  return result;
}

// main start here ...
int main()
{
  int start, end;
  cout << "Enter starting element :" << endl;
  cin >> start;
  cout << "Enter ending element:" << endl;
  cin >> end;

  vector<int> v = getAllPrimeNum(start, end);
  for (auto it = v.begin(); it != v.end(); it++)
  {
    cout << *it << " ,";
  }
  return 0;
}