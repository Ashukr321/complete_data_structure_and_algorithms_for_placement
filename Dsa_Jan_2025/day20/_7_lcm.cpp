// preprocessor
#include <iostream>
using namespace std;

int hcf(int a, int b)
{
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
  cout << "Enter a and b:" << endl;
  cin >> a >> b;
  cout << "Lcm of the enter your number " << lcm(a, b) << endl;

  return 0;
}