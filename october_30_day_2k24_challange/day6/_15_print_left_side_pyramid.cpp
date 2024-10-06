// preprocessor
#include <iostream>
using namespace std;

void printLeftSidePyramid(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << "*" ;
    }
    cout << endl;
  }
}
// main start here ...
int main()
{
  int n;
  cout << "Enter the n :" << endl;
  cin >> n;
  printLeftSidePyramid(n);
  return 0;
}