// preprocessor
#include <iostream>
using namespace std;

void printPattern(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << "*";
    }
    cout << endl;
  }

  for (int i = 1; i <= n; i++)
  {
    for (int j = 2; j <= n - i + 1; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
}
// main start here ...
int main()
{
  int n;
  cout << "Enter n :" << endl;
  cin >> n;
  printPattern(n);
  return 0;
}