// preprocessor
#include <iostream>
using namespace std;

int sumOfDigit(int n)
{
  // base case
  if (n == 0)
  {
    return 0;
  }
  return n % 10 + sumOfDigit(n / 10);
}
// main start here ...
int main()
{
  int n;
  cout << "Enter your number :" << endl;
  cin >> n;

  cout << "the sum of the digits of the Enter your number :  " << sumOfDigit(n) << endl;
  return 0;
}