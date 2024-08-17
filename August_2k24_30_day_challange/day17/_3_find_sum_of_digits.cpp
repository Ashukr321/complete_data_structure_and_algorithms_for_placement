// preprocessor
#include <iostream>
using namespace std;

int findSumOfDigit(int num)
{
  int sum = 0;
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
  cout << "Enter your number:" << endl;
  cin >> num;
  cout << "the sum of the digits of the number:" << endl;
  cout << findSumOfDigit(num) << endl;

  return 0;
}