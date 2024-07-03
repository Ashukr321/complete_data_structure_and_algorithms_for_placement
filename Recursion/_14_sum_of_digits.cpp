// preprocessor
#include <iostream>
using namespace std;


int digitSum(int n)
{
  if (n == 0)
  {
    return 0;
  }
  return digitSum(n / 10) + (n % 10);
}

// main start here ...
int main()
{
  int n;
  cout << "Enter your digits:" << endl;
  cin >> n;
  int totalDigitSum = digitSum(n);
  cout << "The sum of the digits is: " << totalDigitSum << endl;
  return 0;
}