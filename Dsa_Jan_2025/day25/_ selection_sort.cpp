// preprocessor
#include <iostream>
#include <algorithm>
using namespace std;

void printArray(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void selectionSort(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    int minIndex = i;
    for (int j = i + 1; j < size; j++)
    {
      if (arr[j] < arr[minIndex])
      {
        minIndex = j;
      }
    }
    swap(arr[minIndex], arr[i]);
  }
}

// main start here ...
int main()
{
  int size;
  cout << "Enter the size of the array: ";
  cin >> size;
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the element at index : " << i << endl;
    cin >> n;
    arr[i] = n;
  }

  cout << "Before selection sort" << endl;
  printArray(arr, size);

  cout << "After selection sort " << endl;
  // selection sort
  selectionSort(arr, size);
  printArray(arr, size);

  return 0;
}