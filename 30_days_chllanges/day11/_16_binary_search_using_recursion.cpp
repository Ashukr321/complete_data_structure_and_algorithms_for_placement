#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl; // add a newline at the end
}

int binarySearch(int arr[], int l, int h, int target)
{
  while (l <= h)
  {
    int mid = l + (h - l) / 2; // correct calculation of mid
    if (arr[mid] == target)
    {
      return mid;
    }
    else if (arr[mid] < target)
    {
      l = mid + 1; // update l instead of recursive call
    }
    else
    {
      h = mid - 1; // update h instead of recursive call
    }
  }
  return -1;
}

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

  cout << "Array elements: ";
  printArray(arr, size);

  int target;
  cout << "Enter your target element: ";
  cin >> target;

  int l = 0;
  int h = size - 1;
  int targetIndex = binarySearch(arr, l, h, target);

  if (targetIndex!= -1)
  {
    cout << "Target element is present at index " << targetIndex << endl;
  }
  else
  {
    cout << "Target element is not present in the array" << endl;
  }

  return 0;
}