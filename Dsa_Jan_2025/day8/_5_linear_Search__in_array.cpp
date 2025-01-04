// preprocessor
#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target)
{
  if (target < 0)
  {
    return -1;
  }
  for (int i = 0; i < size; i++)
  {
    if (arr[i] == target)
    {
      return i;
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
  // create  the array
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the element at index" << i << endl;
    cin >> n;
    arr[i] = n;
  }
  int target;
  cout << "Enter the target element" << endl;
  cin >> target;

  int index = linearSearch(arr, size, target);
  if (index != -1)
  {
    cout << "Element found at index " << index << endl;
  }
  else
  {
    cout << "Element not found" << endl;
  }
  return 0;
}