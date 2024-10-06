// preprocessor
#include <iostream>
using namespace std;

void printHollowSquare(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      if (i == 1 || i == n || j == 1 || j == n)
      {
        cout << "*";
      }
      else
      {
        cout << " ";
      }
    }
    cout << endl;
  }
}
// main start here ...
int main()
{
  int n;
  cout << "Enter the number of rows and cols" << endl;
  cin >> n;
  printHollowSquare(n);

  return 0;
}