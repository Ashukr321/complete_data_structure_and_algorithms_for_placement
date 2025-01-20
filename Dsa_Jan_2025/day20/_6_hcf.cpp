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

// main start here ...
int main()
{
  int a, b;
  cout << "Enter the a and b" << endl;
  cin >> a >> b;
  cout << "Hcf of the two number " << hcf(a, b) << endl;
  return 0;
}
