// preprocessor
#include <iostream>
using namespace std;

// her we use the recursion to calculate the factorial of the number
int factorial(int num)
{
  // base case
  if (num == 0 || num==1)
  {
    return 1;
  }
  return num * factorial(num - 1);
}
bool isStrong(int num)
{
  int sum = 0;
  int temp = num;
  while (num != 0)
  {
    int digit = num % 10;
    sum += factorial(digit);
    num = num / 10;
  }
  return sum == temp;
}

// main start here ...
int main()
{
  int num;
  cout << "Enter a number : ";
  cin >> num;
  if (isStrong(num))
  {
    cout << "Enter your number is the strong number :" << endl;
  }
  else
  {
    cout << "Enter your number is not the strong number :" << endl;
  }
  return 0;
}