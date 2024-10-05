// preprocessor
#include <iostream>
using namespace std;

int binarySearch(int arr[], int l, int h, int target)
{
  if (l <= h)
  {
    int mid = l + h / 2;
    if (arr[mid] == target)
    {
      return mid;
    }
    else if (arr[mid] < target)
    {
      return binarySearch(arr, mid + 1, h, target);
    }
    else
    {
      return binarySearch(arr, l, mid - 1, target);
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
    cout << "Enter the element of the array :" << endl;
    cin >> n;
    arr[i] = n;
  }

  cout << endl;
  cout << "Enter the targetElement :" << endl;
  int targetElement;
  cout << "Enter the targetElement:" << endl;
  cin >> targetElement;
  int l = 0;
  int h = size - 1;
  int targetIndex = binarySearch(arr, l, h, targetElement);
  if (targetIndex != -1)
  {
    cout << "Target element found at index " << targetIndex << endl;
  }
  else
  {
    cout << "Target element not found in the array" << endl;
  }
  return 0;
}