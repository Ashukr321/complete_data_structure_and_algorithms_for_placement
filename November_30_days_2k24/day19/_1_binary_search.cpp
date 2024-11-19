// preprocessor
#include <iostream>
using namespace std;

void printArr(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

// binary search condition is element must be in increasing order
int binarySearch(int arr[], int target, int low, int high)
{
  if (low <= high)
  {
    int mid = low + high / 2;
    if (target == arr[mid])
    {
      return mid;
    }
    else if (arr[mid] < target)
    {
      return binarySearch(arr, target, mid + 1, high);
    }
    else
    {
      return binarySearch(arr, target, low, mid - 1);
    }
  }
  return -1;
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
    cout << "Enter the element at index:" << i << endl;
    cin >> n;
    arr[i] = n;
  }

  cout << "print the array element :" << endl;
  printArr(arr, size);
  cout << "Enter the target element " << endl;
  int target;
  cin >> target;

  int targetIndex = binarySearch(arr, target, 0, size - 1);
  if (targetIndex == -1)
  {
    cout << "Element not found" << endl;
  }
  else
  {
    cout << "Element found at index :" << targetIndex << endl;
  }
  return 0;
}