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
  for (int i = j; i < size; i++)
  {
    arr[j] = 0;
    }
}
// main start here ...
int main()
{
  int size;
  cout << "Enter the size of the array :" << endl;
  cin >> size;

  int arr[size];
  cout << "Enter the elements of the array :" << endl;
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter element at index:" << i << endl;
    cin >> n;
    arr[i] = n;
  }
  cout << "Before moving zero end :" << endl;
  printArr(arr, size);
  cout << endl;
  cout << "After moving " << endl;
  moveZeroEnd(arr, size);
  printArr(arr, size);

  return 0;
}