// preprocessor
#include <iostream>
using namespace std;

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
void printAllPrimeNum(int num1, int num2)
{
  for (int i = num1; i <= num2; i++)
  {
    if (isPrime(i))
    {
      cout << i << " ";
    }
  }
}

// main start here ...
int main()
{
  int num1;
  cout << "Enter the num1" << endl;
  cin >> num1;
  int num2;
  cout << "Enter the num2" << endl;
  cin >> num2;
  printAllPrimeNum(num1, num2);

  return 0;
}