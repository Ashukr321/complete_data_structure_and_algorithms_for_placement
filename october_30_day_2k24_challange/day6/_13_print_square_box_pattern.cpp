// preprocessor
#include <iostream>
using namespace std;

void printPattern(int rows, int cols)
{
  for (int i = 1; i <= rows; i++)
  {
    for (int j = 1; j <= cols; j++)
    {
      cout << " * " << " ";
    }
    cout<<endl;
  }
}

// main start here ...
int main()
{
  int rows, cols;
  cout << "Enter the number of rows: ";
  cin >> rows;
  cout << "Enter the number of cols :" << endl;
  cin >> cols;
  printPattern(rows, cols);
  return 0;
}