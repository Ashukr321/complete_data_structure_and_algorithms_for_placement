// preprocessor
#include <iostream>
using namespace std;

int digitSum(int n)
{
  // base case
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
  cout << "Enter your number : " << endl;
  cin >> n;

  int dSum = digitSum(n);
  cout << "the sum digits of the number : " << dSum << endl;
  return 0;
}