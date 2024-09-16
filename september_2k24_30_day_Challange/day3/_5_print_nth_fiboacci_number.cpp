// preprocessor
#include <iostream>
using namespace std;

int printNthFibonacci(int n)
{
  if (n == 0)
  {
    return 0;
  }
  else if (n == 1)
  {
    return 1;
  }
  else
  {
    return printNthFibonacci(n - 1) + printNthFibonacci(n - 2);
  }
}

// main start here ...
int main()
{
  int n;
  cout << "Enter the nth term: " << endl;
  cin >> n;
  cout << "The Fibonacci number at " << n << "th term is: " << printNthFibonacci(n) << endl;
  return 0;
}