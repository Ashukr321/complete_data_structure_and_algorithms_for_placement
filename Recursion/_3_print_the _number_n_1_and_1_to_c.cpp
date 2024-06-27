// preprocessor
#include <iostream>
using namespace std;

void printNum(int n)
{
  // base case
  if (n == 0)
  {
    return;
  }
  cout << n << endl;
  printNum(n - 1);
  cout << n << endl;
}

// main start here ...
int main()
{
  int n;
  cout << "Enter your number:" << endl;
  cin >> n;
  cout << endl;
  printNum(n);
  return 0;
}