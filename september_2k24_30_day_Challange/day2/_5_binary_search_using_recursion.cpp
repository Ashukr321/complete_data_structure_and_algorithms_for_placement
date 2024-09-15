// preprocessor
#include <iostream>
using namespace std;

int binarySearch(int arr[], int l, int h, int target)
{
  while (l <= h)
  {
    int mid = l + h / 2;
    if (arr[mid] == target)
    {
      return mid;
    }
    else if (arr[mid] < target)
    {
      return binarySearch(arr, mid + 1, h, target);
    }
    else
    {
      return binarySearch(arr, l, mid - 1, target);
    }
  }
  return -1;
}
// main start here ...
int main()
{
  int size;
  cout << "Enter the size of the array: ";
  cin >> size;
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the element at index: " << i << endl;
    cin >> n;
    arr[i] = n;
  }
  int target;
  cout << "Enter the target element :" << endl;
  cin >> target;
  int l = 0;
  int h = size - 1;
  int elementIndex = binarySearch(arr, l, h, target);
  if (elementIndex != -1)
  {
    cout << "Element is present at index " << elementIndex << endl;
  }
  else
  {
    cout << "Element is not present in array" << endl;
  }

  return 0;
}