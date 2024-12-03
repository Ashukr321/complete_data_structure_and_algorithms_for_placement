// preprocessor
#include <iostream>
using namespace std;

int binarySearch(int arr[], int start, int end, int target)
{
  if (start <= end)
  {
    int mid = start + (end - start) / 2;
    if (target == arr[mid])
      return mid;
    else if (target > arr[mid])
    {
      return binarySearch(arr, mid + 1, end, target);
    }
    else
    {
      return binarySearch(arr, start, mid - 1, target);
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
  int target;
  cout <<"Enter the target element :" << endl;
  cin >> target;
  int result = binarySearch(arr, 0, size - 1, target);
  if (result == -1)
  {
    cout << "Element is not present in array" << endl;
  }
  else
  {
    cout << "Element is present at index " << result << endl;
  }

  return 0;
}

// binary search is the part of the divide and  conquer algorithm
// time complexity is O(logn)