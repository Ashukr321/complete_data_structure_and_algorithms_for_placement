// preprocessor
#include <iostream>
using namespace std;

// calculate the fibonacci of the number using recursion
int fibonacci(int n)
{
  if (n == 0 || n == 1)
  {
    return 1;
  }
  return fibonacci(n - 1) + fibonacci(n - 2);
}

// main start here ...
int main()
{
  int n;
  cout << "Enter your number that you want to calculate the fibonacci of the number: " << endl;
  cin >> n;
  cout << "The fibonacci of the number is: " << fibonacci(n) << endl;
  return 0;
}