// preprocessor
#include <iostream>
using namespace std;

int factorial(int num)
{
  // base case
  if (num == 0 || num == 1)
  {
    return 1;
  }
  return num * factorial(num - 1);
}

// main start here ...
int main()
{
  int num;
  cout << "Enter your number :" << endl;
  cin >> num;
  cout << "Factorial of " << num << " is " << factorial(num) << endl;
  return 0;
}