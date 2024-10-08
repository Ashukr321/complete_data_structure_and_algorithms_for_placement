// preprocessor
#include <iostream>
using namespace std;

int binarySearch(int arr[], int l, int h, int target)
{
  if (l < h)
  {
    int mid = l + h / 2;
    if (arr[mid] == target)
    {
      return mid;
    }
    else if (arr[mid] < target)
    {
      return binarySearch(arr, l, mid - 1, target);
    }
    else
    {
      return binarySearch(arr, mid + 1, h, target);
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

    cout << "Enter the element " << i + 1 << " :" << endl;
    cin >> n;
    arr[i] = n;
  }
  cout << endl;
  int target;
  cout << "Enter the target element :" << endl;
  cin >> target;
  int result = binarySearch(arr, 0, size - 1, target);
  if (result != -1)
  {
    cout << "Element is present at index " << result << endl;
  }
  else
  {
    cout << "Element is not present in array" << endl;
  }
  return 0;
}

// binary search always apply on sorted data