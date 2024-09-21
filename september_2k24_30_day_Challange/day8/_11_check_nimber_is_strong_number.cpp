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
bool isStrong(int num)
{
  int originalNum = num;
  int sum = 0;
  while (num != 0)
  {
    int digit = num % 10;
    sum = sum + factorial(digit);
    num /= 10;
  }
  return sum == originalNum;
}
// main start here ...
int main()
{
  int num;
  cout << "Enter your number " << endl;
  cin >> num;
  if (isStrong(num))
  {
    cout << "The number is strong" << endl;
  }
  else
  {
    cout << "The number is not strong" << endl;
  }
  return 0;
}