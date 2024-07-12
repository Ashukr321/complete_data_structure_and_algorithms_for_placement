// preprocessor
#include <iostream>
using namespace std;

int proDigits(int n)
{
  if (n == 0)
  {
    return 1; // base case for single digit numbers
  }
  if (n < 10)
  {
    return n;
  }
  return (n % 10) * proDigits(n / 10);
}

// main start here ...
int main()
{
  int num;
  cout << "Enter your digits: " << endl;
  cin >> num;
  if (num < 0)
  {
    cout << "Please enter a non-negative integer." << endl;
    return 1; // error code
  }
  cout << "The product of the digits: " << proDigits(num) << endl;
  return 0;
}