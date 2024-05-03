// preprocessor
#include <iostream>
using namespace std;

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
    if (arr[mid] < target)
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
  int target;
  cout << "Enter the size of the array !" << endl;
  cin >> size;
  int arr[size];
  cout << "Enter the target element : " << endl;
  cin >> target;

  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the element at index : " << i << endl;
    cin >> n;
    arr[i] = n;
  }

  int resultIndex = binarySearch(arr, size, target);
  if (resultIndex != -1)
  {
    cout << "Element is present at index: " << resultIndex << endl;
  }
  else
  {
    cout << "Element is not present in the array." << endl;
  }
  return 0;
}

/*
 binary search algorithm
  time complexity => o(logn) where n is the number of the sorted array
binary search is always apply on the sorted array
*/