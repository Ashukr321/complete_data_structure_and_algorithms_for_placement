// preprocessor
#include <iostream>
using namespace std;
void printLeftReversePyramid(int n)
{
  for (int i = 1; i <= n; i++)
  {

    for (int j = 1; j <= n - i+1; j++)
    {
      cout << "* ";
    }
    cout << endl;
  }
}

// main start here ...
int main()
{
  int n;
  cout << "Enter the n:" << endl;
  cin >> n;
  printLeftReversePyramid(n);
  return 0;
}