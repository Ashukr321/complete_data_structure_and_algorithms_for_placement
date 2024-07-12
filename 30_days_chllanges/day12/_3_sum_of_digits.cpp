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
  return   sumOfDigit(n / 10)+(n % 10);
}
// main start here ...
int main()
{
  int num;
  cout << "Enter your number : " << endl;
  cin >> num;
  cout << "the sum of the digits: " << sumOfDigit(num) << endl;

  return 0;
}