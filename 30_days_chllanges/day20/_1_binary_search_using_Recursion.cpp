// preprocessor
#include <iostream>
using namespace std;

void displayArray(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int binarySearch(int arr[], int target, int low, int high)
{
  while (low <= high)
  {
    int mid = low + high / 2;
    if (arr[mid] == target)
    {
      return mid;
    }
    if (arr[mid] < target)
    {
      return binarySearch(arr, target, mid + 1, high);
    }
    else
    {
      return binarySearch(arr, target, low, mid - 1);
    }
  }
  return -1;
}

// main start here ...
int main()
{
  int size;
  cout << "Enter the size of the array:" << endl;
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
  cout << "Enter the target element :" << endl;
  cin >> target;
  int l = 0;
  int h = size - 1;
  int targetElementIndex = binarySearch(arr, target, l, h);
  if (targetElementIndex != -1)
  {
    cout << "Target element is present at index " << targetElementIndex << endl;
  }
  else
  {
    cout << "Target element is not present in the array" << endl;
  }
  cout<<"display all  array element: "<<endl;
  displayArray(arr,size);

  return 0;
}