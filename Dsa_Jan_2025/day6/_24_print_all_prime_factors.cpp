// preprocessor
#include <iostream>
using namespace std;

// check is Prime
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

void printAllPrimeFactor(int num)
{
  for (int i = 2; i <= num; i++)
  {
    if (num % i == 0)
    {
      if (isPrime(i))
      {
        cout << i << " ";
      }
    }
  }
}

// main start here ...
int main()
{
  int num;
  cout << "Enter the number : ";
  cin >> num;
  printAllPrimeFactor(num);

  return 0;
}