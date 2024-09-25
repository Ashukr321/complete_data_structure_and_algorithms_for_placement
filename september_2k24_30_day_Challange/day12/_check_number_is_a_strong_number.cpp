// preprocessor
#include <iostream>
using namespace std;

int factorial(int num)
{
  // base case
  if (num == 1)
  {
    return 1;
  }
  return num * factorial(num - 1);
}

bool isStrongNum(int num)
{
  int sum = 0;
  int originalNum = num;
  while (num != 0)
  {
    int digit = num % 10;
    sum += factorial(digit);
    num /= 10;
  }
  return sum == originalNum;
}
// main start here ...
int main()
{
  int num;
  cout << "Enter your number :" << endl;
  cin >> num;
  if (isStrongNum(num))
  {
    cout << "Number is strong" << endl;
  }
  else
  {
    cout << "Number is not strong" << endl;
  }
  return 0;
}