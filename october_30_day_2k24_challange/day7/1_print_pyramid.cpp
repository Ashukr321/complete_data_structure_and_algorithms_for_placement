// preprocessor
#include <iostream>
using namespace std;

void printPyramid(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << "*";
      ;
    }
    cout << endl;
  }
}

// main start here ...
int main()
{
  int n;
  cout << "Enter the number of rows " << endl;
  cin >> n;
  printPyramid(n);

  return 0;
}