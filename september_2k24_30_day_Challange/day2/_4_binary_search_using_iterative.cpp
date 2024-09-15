// preprocessor
#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target)
{
  int l = 0, h = size - 1;
  while (l <= h)
  {
    int mid = l + h / 2;
    if (arr[mid] == target)
    {
      return mid;
    }
    else if (arr[mid] < target)
    {
      l = mid + 1;
    }
    else
    {
      h = mid - 1;
    }
  }
  return -1;
}
// main start here ...
int main()
{
  int size;
  cout << "Enter the size of the array " << endl;
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
  int elementIndex = binarySearch(arr, size,target);
  if (elementIndex != -1)
  {
    cout << "Element found at index " << elementIndex << endl;
  }
  else
  {
    cout << "Element not found in the array" << endl;
  }
  return 0;
}