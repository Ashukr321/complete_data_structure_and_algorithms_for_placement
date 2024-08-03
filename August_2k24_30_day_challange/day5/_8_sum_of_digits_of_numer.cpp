// preprocessor
#include <iostream>
using namespace std;

int sumOfDigit(int num)
{
  int sum;
  while (num != 0)
  {
    int digit = num % 10;
    sum += digit;
    num = num / 10;
  }
  return sum;
}
// main start here ...
int main()
{
  int num;
  cout << "Enter your number :" << endl;
  cin >> num;
  cout << "The sum digits of the number : " << sumOfDigit(num) << endl;

  return 0;
}