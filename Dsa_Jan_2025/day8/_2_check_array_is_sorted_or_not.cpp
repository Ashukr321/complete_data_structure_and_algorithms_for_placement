// preprocessor
#include <iostream>
using namespace std;

bool isSorted(int arr[], int size)
{
  for (int i = 0; i < size; i++)
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

  cout << "Enter the size of array : ";
  cin >> size;
  // create the array
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the element at index:" << i << endl;
    cin >> n;
    arr[i] = n;
  }
  if (isSorted(arr, size))
  {
    cout << "Array is sorted";
  }
  else
  {
    cout << "Array is not sorted";
  }
  return 0;
}