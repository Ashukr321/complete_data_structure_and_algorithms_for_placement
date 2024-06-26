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
  int target;
  cout << "Enter the size of the array : " << endl;
  cin >> size;
   cout << "Enter the target element that you want to search : " << endl;
  cin >> target;
  int arr[size];
 

  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the element at index: " << i << endl;
    cin >> n;
    arr[i] = n;
  }

  int targetElementIndex = binarySearch(arr, size, target);
  if (targetElementIndex != -1)
  {
    cout << "Target element is found at index : " << targetElementIndex << endl;
  }
  else
  {
    cout << "Target element is not found" << endl;
  }
  return 0;
}