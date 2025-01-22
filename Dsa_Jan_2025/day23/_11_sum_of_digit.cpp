// preprocessor
#include <iostream>
using namespace std;

int sumOfDigit(int num)
{
  int sum = 0;
  // base case
  if (num == 0)
  {
    return 0;
  }
  int digit = num % 10;
  sum += digit;
  return sum + sumOfDigit(num / 10);
}

// main start here ...
int main()
{
  int num;
  cout << "Enter your  number " << endl;
  cin >> num;
  cout << "Sum of the digit " << sumOfDigit(num) << endl;

  return 0;
}