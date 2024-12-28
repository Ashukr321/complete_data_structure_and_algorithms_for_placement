// preprocessor
#include <iostream>
#include <algorithm>
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

void bubbleSort(int arr[], int size)
{
  for (int i = 0; i < size - 1; i++)
  {
    for (int j = 0; j < size - 1 - i; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        swap(arr[j], arr[j + 1]);
      }
    }
  }
}
// main start here ...
int main()
{
  int size;
  cout << "Enter the size of array ";
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
  // before bubbles sort
  cout << "Before sorting: " << endl;
  printArray(arr, size);
  // bubble sort
  bubbleSort(arr, size);
  printArray(arr, size);

  return 0;
}