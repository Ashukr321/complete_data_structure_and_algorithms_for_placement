// preprocessor
#include <iostream>
using namespace std;

void printNumberNtoOne(int n)
{
  // base case
  if (n == 0)
  {
    return;
  }
  printNumberNtoOne(n - 1);
  cout << n << endl;
}

// main start here ...
int main()
{
  int n;
  cout << "Enter the your Number :" << endl;
  cin >> n;
  printNumberNtoOne(n);

  return 0;
}