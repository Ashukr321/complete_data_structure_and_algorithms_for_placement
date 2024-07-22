// preprocessor
#include <iostream>
using namespace std;

bool isSorted(int arr[], int size)
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
  cout << "Enter the size of the array : ";
  cin >> size;
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
    cout << "The array is sorted" << endl;
  }
  else
  {
    cout << "The array is not sorted" << endl;
  }
  return 0;
}