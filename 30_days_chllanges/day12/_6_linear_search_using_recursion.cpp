#include <iostream>
using namespace std;

void displayArray(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl; // add this to move to the next line
}

int linearSearch(int arr[], int size, int target, int index)
{
  if (index == size)
  {
    return -1; // change size - 1 to size
  }
  if (arr[index] == target)
  {
    return index; // return the index instead of 1
  }
  // call the recursive function
  return linearSearch(arr, size, target, index + 1);
}

int main()
{
  int size;
  cout << "Enter the size of the array: " << endl;
  cin >> size;
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the element at index: " << i << endl;
    cin >> n;
    arr[i] = n;
  }

  cout << "Display the array elements: " << endl;
  displayArray(arr, size);

  int target;
  cout << "Enter the target element: " << endl;
  cin >> target;

  int targetIndex = linearSearch(arr, size, target, 0);

  if (targetIndex != -1)
  {
    cout << "The target element is present at index " << targetIndex << endl;
  }
  else
  {
    cout << "The target element is not present in the array" << endl;
  }

  return 0;
}