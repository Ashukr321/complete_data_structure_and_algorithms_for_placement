// preprocessor
#include <iostream>
using namespace std;

void displayArray(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
}
bool checkArraySorted(int arr[], int size)
{

  for (int i = 0; i < size - 1; i++)
  {
    if (arr[i] > arr[i + 1])
    {
      return false;
    }
  }
  return true;
}
// main start here ...
int main()
{
  int size;
  cout << "Enter the size of the array:" << endl;
  cin >> size;
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the element at index: " << i << endl;
    cin >> n;
    arr[i] = n;
  }
  if (checkArraySorted(arr, size))
  {
    cout << "array is sorted in format" << endl;
    displayArray(arr, size);
  }
  else
  {
    cout << "Array is not sorted : " << endl;
    displayArray(arr, size);
  }

  return 0;
}