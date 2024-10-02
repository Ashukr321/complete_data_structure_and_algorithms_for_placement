// preprocessor
#include <iostream>
using namespace std;

// main start here ...
int main()
{
  int rows, cols;
  cout << "Enter the number of rows " << endl;
  cin >> rows;
  cout << "Enter the number of cols" << endl;
  cin >> cols;
  int arr[rows][cols];
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      int n;
      cout << "Enter the  element of the 2d array at " << "[ " << i << "," << j << " ]" << endl;
      cin >> n;
      arr[i][j] = n;
    }
    cout<<endl;
  }

  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      cout << arr[i][j] << " ";
    }
  }

  return 0;
}