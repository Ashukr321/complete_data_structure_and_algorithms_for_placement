// preprocessor
#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num)
{

  if (num <= 1)
  {
    return false;
  }
  for (int i = 2; i < sqrt(num); i++)
  {
    if (num % i == 0)
    {
      return false;
    }
  }
  return true;
}

void printAllPrimeNumber(int num1, int num2)
{
  for (int i = num1; i <= num2; i++ )
  {
    if (isPrime(i))
    {
      cout << i << " ,";
    }
  }
}
// main start here ...
int main()
{
  int num1, num2;
  cout << "Enter the number  num1: ";
  cin >> num1;
  cout << "Enter number 2 " << endl;
  cin >> num2;

  printAllPrimeNumber(num1, num2);

  return 0;
}