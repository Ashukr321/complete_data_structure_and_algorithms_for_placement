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
int lcm(int a, int b)
{
  return a * b / gcd(a, b);
}
// main start here ...
int main()
{
  int a, b;
  cout << "Enter a:" << endl;
  cin >> a;
  cout << "Enter b:" << endl;
  cin >> b;
  cout << "lcm of the enter your number :" << lcm(a, b) << endl;

  return 0;
}