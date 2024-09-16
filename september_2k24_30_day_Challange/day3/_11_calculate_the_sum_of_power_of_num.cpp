// preprocessor
#include <iostream>
#include <math.h>
using namespace std;

int powerSum(int n)
{
  if (n == 1)
  {
    return 1;
  }
  return pow(n, 2) + powerSum(n - 1);
}
// main start here ...
int main()
{
  int n;
  cout << "Enter your number : "<< endl;
  cin >> n;
  cout << "the power of the number :" << powerSum(n) << endl;
  return 0;
}