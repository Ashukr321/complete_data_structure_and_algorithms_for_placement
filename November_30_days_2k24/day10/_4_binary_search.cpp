// preprocessor
#include <iostream>
using namespace std;

int binarySearch(int arr[], int low, int high, int target)
{
  if (low < high)
  {
    int mid = low + high / 2;
    if (arr[mid] == target)
    {
      return mid;
    }
    else if (arr[mid] < target)
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
  cout << "Enter the size of the array " << endl;
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
  cout << "Enter your target element :" << endl;
  cin >> target;
  int result = binarySearch(arr, 0, size - 1, target);
  if (result == -1)
  {
    cout << "Element not found" << endl;
  }
  else
  {
    cout << "Element found at index " << result << endl;
  }

  return 0;
}