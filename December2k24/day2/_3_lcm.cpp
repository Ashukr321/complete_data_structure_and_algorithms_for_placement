// preprocessor
#include <iostream>
using namespace std;
int hcf(int a, int b)
{
  // base case
  if (b == 0)
  {
    return a;
  }
  return hcf(b, a % b);
}
int lcm(int a, int b)
{
  return a * b / hcf(a, b);
}

// main start here ...
int main()
{
  int a, b;
  cout << "Enter the first number :" << endl;
  cin >> a;
  cout << "Enter the second number :" << endl;
  cin >> b;
  cout << "lcm of the enter your number :" << lcm(a, b) << endl;
  return 0;
}