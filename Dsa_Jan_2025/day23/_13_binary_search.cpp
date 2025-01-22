// preprocessor
#include <iostream>
using namespace std;

int binarySearch(int arr[], int start, int end, int target)
{
  if (start <= end)
  {
    int mid = start + end / 2;
    if (arr[mid] == target)
    {
      return mid;
    }
    else if (arr[mid] < target)
    {
      return binarySearch(arr, mid + 1, end, target);
    }
    else
    {
      return binarySearch(arr, start, mid - 1, target);
    }
  }
}
// main start here ...
int main()
{
  int size;
  cout << "Enter the size of the array " << endl;
  cin >> size;
  int arr[size];

  cout << "Enter the  sorted elements of the array " << endl;

  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter element at index" << i << endl;
    cin >> n;
    arr[i] = n;
  }

  int target;
  cout << "Enter target element " << endl;
  cin >> target;
  int start = 0;
  int end = size - 1;
  int index = binarySearch(arr, start, end, target);
  if (index != -1)
  {
    cout << "Target element found at index " << index << endl;
  }
  else
  {
    cout << "Target element not found " << endl;
  }
  return 0;
}