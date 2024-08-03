// preprocessor
#include <iostream>
using namespace std;

int factorial(int n)
{
  if (n == 0 || n == 1)
  {
    return 1;
  }
  return n * factorial(n - 1);
}

bool isStrong(int num)
{
  int factorialSum = 0;
  int temp = num;
  while (temp != 0)
  {
    int digit = temp % 10;
    factorialSum += factorial(digit);
    temp = temp / 10;
  }
  return factorialSum == num;
}
// main start here ...
int main()
{
  int n;
  cout << "Enter your number : " << endl;
  cin >> n;
  if (isStrong(n))
  {
    cout << "The number " << n << " is a strong number" << endl;
  }
  else
  {
    cout << "The number " << n << " is not a strong number" << endl;
  }
  return 0;
}