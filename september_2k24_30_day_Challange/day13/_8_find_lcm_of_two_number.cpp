// preprocessor
#include <iostream>
using namespace std;

// gcd
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
  int a, b;
  cout << "Enter a :" << endl;
  cin >> a;
  cout << "Enter b:" << endl;
  cin >> b;
  cout << "lcm of  Enter your number :" << lcm(a, b) << endl;
  return 0;
}