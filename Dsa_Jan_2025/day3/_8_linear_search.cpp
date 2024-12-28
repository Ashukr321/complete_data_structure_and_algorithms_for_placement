// preprocessor
#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int linearSearch(int arr[], int size, int target)
{
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
  // create the array
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the element at index:" << i << endl;
    cin >> n;
    arr[i] = n;
  }
  // print the array
  printArray(arr, size);

  int target;
  cout << "Enter the target element :" << endl;
  cin >> target;
  int index = linearSearch(arr, size, target);
  if (index == -1)
  {
    cout << "Element not found" << endl;
  }
  else
  {
    cout << "Element found at index :" << index << endl;
  }
  return 0;
}