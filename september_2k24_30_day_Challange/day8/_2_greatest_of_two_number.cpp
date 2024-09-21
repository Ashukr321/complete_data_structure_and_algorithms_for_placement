// preprocessor
#include <iostream>
using namespace std;

int maxOfNum(int n1, int n2)
{
  if (n1 < n2)
  {
    return n2;
  }
  else
  {
    return n1;
  }
}
// main start here ...
int main()
{
  int n1, n2;
  cout << "Enter your first number:" << endl;
  cin >> n1;
  cout << "Enter your 2nd number :" << endl;
  cin >> n2;
  cout << maxOfNum(n1, n2) << endl;
  return 0;
}