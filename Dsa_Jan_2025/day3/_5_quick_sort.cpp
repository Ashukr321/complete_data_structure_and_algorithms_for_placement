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

int partition(int arr[], int start, int end)
{
  int pivot = arr[end];
  int i = start - 1;
  for (int j = start; j < end; j++)
  {
    if (arr[j] <= pivot)
    {
      i++;
      swap(arr[i], arr[j]);
    }
  }
  swap(arr[i + 1], arr[end]);
  return i + 1;
}

void quickSort(int arr[], int start, int end)
{
  // base case
  if (start >= end)
  {
    return;
  }

  if (start <= end)
  {
    int pivot = partition(arr, start, end);
    quickSort(arr, start, pivot - 1);
    quickSort(arr, pivot + 1, end);
  }
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

  cout << "Before sorting :" << endl;
  printArray(arr, size);
  cout << "After sorting :" << endl;
  quickSort(arr, 0, size - 1);
  printArray(arr, size);

  return 0;
}