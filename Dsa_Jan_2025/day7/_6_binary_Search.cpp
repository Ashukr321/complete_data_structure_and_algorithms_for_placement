// preprocessor
#include <iostream>
using namespace std;

// printArray
void printArray(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

//  array must be  in sorted order 
int BinarySearch(int arr[], int start, int end, int target)
{
  while (start <= end)
  {
    int mid = start + (end - start) / 2;
    if (arr[mid] == target)
    {
      return mid;
    }
    else if (arr[mid] < target)
    {
      return BinarySearch(arr, mid + 1, end, target);
    }
    else
    {
      return BinarySearch(arr, start, mid - 1, target);
    }
  }
  return -1;
}

// main start here ...
int main()
{

  int size;
  cout << "Enter the size of array " << endl;
  cin >> size;
  int arr[size];

  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the element at index:" << i << endl;
    cin >> n;
    arr[i] = n;
  }

  printArray(arr, size);
  int target;
  cout << "Enter the target element " << endl;
  cin >> target;
  int Index = BinarySearch(arr, 0, size - 1, target);
  if (Index != -1)
  {
    cout << "Element is present at index " << Index << endl;
  }
  else
  {
    cout << "Element is not present in array " << endl;
  }

  return 0;
}