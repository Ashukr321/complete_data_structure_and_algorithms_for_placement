// preprocessor
#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target)
{
  int l = 0;
  int h = size - 1;
  while (l <= h) // changed from l < h to l <= h
  {
    int mid = (l + h) / 2; // changed from l + h / 2 to (l + h) / 2
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
  cout << "Enter the size of the array :" << endl;
  cin >> size;
  int* arr = new int[size]; // dynamically allocate array
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the element at index:" << i << endl;
    cin >> n;
    arr[i] = n;
  }
  int targetElement;
  cout << "Enter the target Element " << endl;
  cin >> targetElement;
  int targetIndex = binarySearch(arr, size, targetElement);
  if (targetIndex != -1)
  {
    cout << "Target Element found at index " << targetIndex << endl;
  }
  else
  {
    cout << "Target Element not found" << endl;
  }
  delete[] arr; // free dynamically allocated memory
  return 0;
}