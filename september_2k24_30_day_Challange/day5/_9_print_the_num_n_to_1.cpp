// preprocessor
#include <iostream>
using namespace std;

void printNto1(int n)
{
  // base case
  if (n == 0)
  {
    return;
  }
  cout << n << endl;
  printNto1(n - 1);
}

// main start here ...
int main()
{
  int n;
  cout << "Enter value of  n:" << endl;
  cin >> n;
  printNto1(n);
  return 0;
}