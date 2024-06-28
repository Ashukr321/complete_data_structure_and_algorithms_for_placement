// preprocessor
#include <iostream>
using namespace std;

int calculatePower(int b, int e)
{
  if (e == 0)
  {
    return 1;
  }
  else
  {
    return b * calculatePower(b, e - 1);
  }
}

// main start here ...
int main()
{
  int b, e;
  cout << "Enter the base  number:" << endl;
  cin >> b;
  cout << "Enter the exponent number:" << endl;
  cin >> e;
  int total = calculatePower(b, e);
  cout << "The result is:" << total << endl;
  return 0;
}