// preprocessor
#include <iostream>
using namespace std;

bool isPrime(int num)
{
  if (num <= 1)
  {
    return false;
  }
  for (int i = 2; i < num; i++)
  {
    if (num % i == 0)
    {
      return false;
    }
  }
  return true;
}
// main start here ...
int main()
{
  int num;
  cout << "Enter the number : ";
  cin >> num;
  if (isPrime(num))
  {
    cout << num << " is a prime number";
  }
  else
  {
    cout << num << " is not a prime number";
  }
  return 0;
}