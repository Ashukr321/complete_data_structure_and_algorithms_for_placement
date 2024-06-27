// preprocessor
#include <iostream>
using namespace std;

/**
 * The above function calculates the factorial of a given integer using recursion.
 *
 * @param n The function `factorial` calculates the factorial of a given integer `n`. The factorial of
 * a non-negative integer `n`, denoted as `n!`, is the product of all positive integers less than or
 * equal to `n`.
 *
 * @return The factorial of the input integer `n` is being returned by the `factorial` function.
 */
int factorial(int n)
{
  if (n < 0)
  {
    cout << "plz Enter the valid number:" << endl;
    return -1;
  }
  if (n == 0)
  {
    return 1;
  }
  return n * factorial(n - 1);
}

// main start here ...
int main()
{
  int n;
  cout << "Enter  your number " << endl;
  cin >> n;
  cout << "Factorial of " << n << " is " << factorial(n) << endl;
  return 0;
}