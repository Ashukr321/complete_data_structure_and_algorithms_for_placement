#include <iostream>
using namespace std;

// iterative binary search
int binarySearch(int arr[], int size, int target)
{
  int l = 0;
  int h = size - 1;
  while (l <= h)
  {
    int mid = (l + h) / 2;
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

int main()
{
  int arr[] = {1, 2, 3, 4, 44};
  int target;
  cout << "Enter the target element : " << endl;
  cin >> target;
  int size = sizeof(arr) / sizeof(arr[0]); // calculate the size of the array
  int elementIndex = binarySearch(arr, size, target); // pass the target to the function
  if (elementIndex != -1)
  {
    cout << "Element present at index :" << elementIndex << endl;
  }
  else
  {
    cout << "element not found in the array " << endl;
  }
  return 0;
}