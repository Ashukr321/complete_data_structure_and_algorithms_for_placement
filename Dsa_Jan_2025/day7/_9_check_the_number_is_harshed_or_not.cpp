// preprocessor
#include <iostream>
using namespace std;

int sumDigit(int num)
{
  int sum = 0;
  while (num != 0)
  {
    int digit = num % 10;
    sum += digit;
    num /= 10;
  }
  return sum;
}

// if the  number is divisible by sum of the digits of the number
bool isHarshed(int num)
{
  int digitSum = sumDigit(num);
  if (num % digitSum == 0)
  {
    return true;
  }
  return false;
}
// main start here ...
int main()
{
  int num;
  cout << "Enter the number : ";
  cin >> num;
  if (isHarshed(num))
  {
    cout << "The number is Harshad number" << endl;
  }
  else
  {
    cout << "The number is not Harshad number" << endl;
  }
  return 0;
}