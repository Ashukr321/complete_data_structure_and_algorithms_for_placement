// preprocessor
#include <iostream>
using namespace std;
int binarySearch(int arr[], int low, int high, int target)
{
  while (low <= high)
  {
    int mid = low + high / 2;
    if (arr[mid] == target)
    {
      return mid;
    }
    if (arr[mid] < target)
    {
      return binarySearch(arr, mid + 1, high, target);
    }
    else
    {
      return binarySearch(arr, low, mid - 1, target);
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
    cout << "Enter the  element at index:" << i << endl;
    cin >> n;
    arr[i] = n;
  }

  int targetElement;
  cout << "Enter the target element :" << endl;
  cin >> targetElement;
  if (binarySearch(arr, 0, size - 1, targetElement) != -1)
  {
    cout << "Element is present at index " << binarySearch(arr, 0, size - 1, targetElement) << endl;
  }
  else
  {
    cout << "Element is not present in array" << endl;
  }

  return 0;
}