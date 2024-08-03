// preprocessor
#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int n)
{
  if (n <= 1)
  {
    return false;
  }
  for (int i = 2; i <= n / 2; i++)
  {
    if (n % i == 0)
    {
      return true;
    }
  }
}
vector<int> primeFactor(int num)
{
  vector<int> factors;
  for (int i = 2; i <= num; i++)
  {
    if (num % i == 0 && isPrime(i))
    {
      factors.push_back(i);
    }
  }
  return factors;
}
// main start here ...
int main()
{

  int n;
  cout << "Enter your number:" << endl;
  cin >> n;
  vector<int> pFacts = primeFactor(n);
  for (auto n : pFacts)
  {
    cout << n << endl;
  }
  return 0;
}