// preprocessor
#include <iostream>
using namespace std;

int maxPicesc(int n, int a, int b, int c)
{
  if (n == 0)
  {
    return 0;
  }
  if (n < 0)
  {
    return -1;
  }
  int res = (maxPicesc(n - a, a, b, c) || maxPicesc(n - b, a, b, c) || maxPicesc(n - c, a, b, c));
  if (res == -1)
  {
    return -1;
  }
  return res + 1;
}
// main start here ...
int main()
{
  int n, a, b, c;
  cout << "Enter the max size of the rope" << endl;
  cin >> n;

  cout << "Enter the size of the a " << endl;
  cin >> a;
  cout << "Enter the b " << endl;
  cin >> b;
  cout << "Enter the c" << endl;
  cin >> c;
  int maxPices = maxPicesc(b, a, b, c);
  cout << "max pices of the rope  : " << maxPices << endl;

  return 0;
}