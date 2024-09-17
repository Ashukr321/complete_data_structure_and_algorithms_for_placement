// preprocessor
#include <iostream>
using namespace std;

int countNumberOfDigit(int n)
{
  int countDigit = 0;
  if (n == 0)
  {
    return 0;
  }

  return 1 + countNumberOfDigit(n / 10);
}

// main start here ...
int main()
{
  int n;
  cout << "Enter your number :" << endl;
  cin >> n;
  cout << "count the digit " << countNumberOfDigit(n) << endl;
  return 0;
}