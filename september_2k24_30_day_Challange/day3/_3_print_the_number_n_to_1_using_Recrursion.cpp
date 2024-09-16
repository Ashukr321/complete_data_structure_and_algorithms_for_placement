// preprocessor
#include <iostream>
using namespace std;

void printNumNto1(int n)
{
  if (n == 0)
  {
    return;
  }
  cout << n << endl;
  printNumNto1(n - 1);
}

// main start here ...
int main()
{
  int n;
  cout << "Enter your number :" << endl;
  cin >> n;
  printNumNto1(n);

  return 0;
}