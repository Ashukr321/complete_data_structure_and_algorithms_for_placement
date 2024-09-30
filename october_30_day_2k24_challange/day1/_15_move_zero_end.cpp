// preprocessor
#include <iostream>
using namespace std;

void printArr(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
}

void moveZeroEnd(int arr[], int size)
{
  int j = 0;
  for (int i = 0; i < size; i++)
  {
    if (arr[i] != 0)
    {
      arr[j] = arr[i];
      j++;
    }
  }
  while (j < size)
  {
    arr[j] = 0;
    j++;
  }
}
// main start here ...
int main()
{
  int size;
  cout << "Enter the size of the array :" << endl;
  cin >> size;
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the  element at index:" << i << endl;
    cin >> n;
    arr[i] = n;
  }

  cout << "before move zero end " << endl;
  cout << "After move zero end " << endl;
  moveZeroEnd(arr, size);
  printArr(arr, size);
  return 0;
}