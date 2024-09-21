// preprocessor
#include <iostream>
using namespace std;

int sumDigit(int num, int sum = 0)
{
  if (num == 0)
  {
    return sum;
  }
  int digit = num % 10;
  sum += digit;
  sumDigit(num / 10, sum);
}
// main start here ...
int main()
{
  int num;
  cout << "Enter  your number: " << endl;
  cin >> num;
  cout << "the sum of the digit :" << sumDigit(num) << endl;
  return 0;
}