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
  int a, b;
  cout << "Enter the element a:" << endl;
  cin >> a;
  cout << "Enter the element b :" << endl;
  cin >> b;

  cout << "Gcd of the two number :" << gcd(a, b) << endl;

  return 0;
}