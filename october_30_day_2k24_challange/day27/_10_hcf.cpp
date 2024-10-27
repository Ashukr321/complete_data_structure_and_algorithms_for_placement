// preprocessor
#include <iostream>
using namespace std;

int HCF(int a, int b)
{
  // base case
  if (b == 0)
  {
    return a;
  }
  return HCF(b, a % b);
}
// main start here ...
int main()
{
  int a, b;
  cout << "Enter a :" << endl;
  cin >> a;
  cout << "Enter b:" << endl;
  cin >> b;
  cout << "hcf of the two number :" << HCF(a, b) << endl;
  return 0;
}