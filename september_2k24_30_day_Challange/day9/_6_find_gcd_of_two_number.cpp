// preprocessor
#include <iostream>
using namespace std;

int gcd(int a, int b)
{
  if (b == 0)
  {
    return a;
  }
  return gcd(b, a % b);
}

int lcm(int a, int b)
{
  return a * b / gcd(a, b);
}
// main start here ...
int main()
{

  int num1, num2;
  cout << "Enter your number num1 :" << endl;
  cin >> num1;
  cout << "Enter your number num 2 " << endl;
  cin >> num2;
  cout << "gcd of the two number :" << gcd(num1, num2) << endl;
  cout << "lcm of the two number :" << lcm(num1, num2) << endl;
  return 0;
}