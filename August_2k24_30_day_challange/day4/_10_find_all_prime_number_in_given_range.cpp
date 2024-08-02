// preprocessor
#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int num)
{
  if (num <= 1)
  {
    return false;
  }
  for (int i = 2; i <= num / 2; i++)
  {
    if (num % i == 0)
    {
      return false;
    }
  }
  return true;
}

vector<int> findRangePrime(int start, int end)
{
  vector<int> primes;
  for (int num = start; num <= end; num++)
  {
    if (isPrime(num))
    {
      primes.push_back(num);
    }
  }
  return primes;
}

// main start here ...
int main()
{
  int start;
  cout << "Enter the start index:" << endl;
  cin >> start;
  int end;
  cout << "Enter the end index:" << endl;
  cin >> end;
  vector<int> primesNum = findRangePrime(start, end);
  for (auto num : primesNum)
  {
    cout << num << endl;
  }

  return 0;
}