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

// main start here ...
int main()
{
  int a, b;
  cout << "Enter the first number :" << endl;
  cin >> a;
  cout << "Enter the second number :" << endl;
  cin >> b;
  cout << "the hcf the enter your number is :" << hcf(a, b) << endl;
  return 0;
}