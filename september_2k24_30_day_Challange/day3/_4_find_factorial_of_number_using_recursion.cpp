// preprocessor
#include <iostream>
using namespace std;

int factorialNum(int n)
{
  if (n == 1)
  {
    return 1;
  }
  return n * factorialNum(n - 1);
}

// main start here ...
int main()
{
  int n;
  cout << "Enter your number :" << endl;
  cin >> n;
  cout << "factorial of number  " << n << "  -> " << factorialNum(n) << endl;

  return 0;
}