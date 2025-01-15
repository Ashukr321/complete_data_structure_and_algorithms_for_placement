// preprocessor
#include <iostream>
using namespace std;

int oddSum(int n, int sum = 0)
{
  // base case
  if (n == 0)
  {
    return sum;
  }
  if (n % 2 != 0)
  {
    sum += n;
  }
  return oddSum(n - 1, sum);
}
// main start here ...
int main()
{
  int n;
  cout << "Enter your number " << endl;
  cin >> n;
  int os = oddSum(n);
  cout << "The sum of odd number is " << os << endl;

  return 0;
}