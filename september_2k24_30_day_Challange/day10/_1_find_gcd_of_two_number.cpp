// preprocessor
#include <iostream>
using namespace std;

int gcd(int a, int b)
{
  // base case
  if (b == 0)
  {
    return a;
  }
  return gcd(b, a % b);
}
// main start here ...
int main()
{
  int num1, num2;
  cout << "Enter your number  num1 " << endl;
  cin >> num1;
  cout << "Enter your number num2 " << endl;
  cin >> num2;
  cout << "the GCD of the two number is : " << gcd(num1, num2) << endl;
  return 0;
}