// preprocessor
#include <iostream>
using namespace std;

int getFactorial(int n)
{
  // base case
  if (n == 0 || n == 1)
  {
    return 1;
  }
  return n * getFactorial(n - 1);
}
// check the number is strong number
bool isStrongNumber(int num)
{
  int sum = 0;
  int temp = num;
  while (num != 0)
  {
    int digit = num % 10;
    sum += getFactorial(digit);
    num /= 10;
  }
  return sum == temp;
}
// main start here ...
int main()
{
  int num;
  cout << "Enter your number :" << endl;
  cin >> num;
  if (isStrongNumber(num))
  {
    cout << "The number is strong number" << endl;
  }
  else
  {
    cout << "The number is not strong number" << endl;
  }
  return 0;
}