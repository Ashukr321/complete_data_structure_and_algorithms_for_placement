// preprocessor
#include <iostream>
using namespace std;

int printFactorial(int n)
{
  // base case
  if (n == 1 || n == 0)
  {
    return 1;
  }
  return n * printFactorial(n - 1);
}

// main start here ...
int main()
{
  int n;
  cout << "Enter your number :" << endl;
  cin >> n;
  int data = printFactorial(n);
  cout << "Factorial of the number :" << data << endl;
  return 0;
}