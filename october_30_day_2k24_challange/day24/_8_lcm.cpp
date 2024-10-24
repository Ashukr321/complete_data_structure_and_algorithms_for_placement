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
  return a * b / hcf(a,b);
}
// main start here ...
int main()
{
  int a, b;
  cout << "Enter the value of a:" << endl;
  cin >> a;
  cout << "Enter the value of b:" << endl;
  cin >> b;
  cout << "Lcm  is" << lcm(a, b) << endl;
  return 0;
}