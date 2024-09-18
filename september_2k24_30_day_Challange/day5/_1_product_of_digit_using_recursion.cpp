// preprocessor
#include <iostream>
using namespace std;

int productOfDigit(int n)
{
  if (n == 1)
  {
    return n;
  }
  return n % 10 * productOfDigit(n / 10);
}
// main start here ...
int main()
{
  int n;
  cout << "Enter your number n " << endl;
  cin >> n;
  cout << "the product of the digit of number :" << productOfDigit(n) << endl;
  return 0;
}