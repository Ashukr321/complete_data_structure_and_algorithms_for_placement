// preprocessor
#include <iostream>
#include<algorithm>
using namespace std;

// display array
void printArr(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int partition(int arr[], int low, int high)
{
  int pivot = arr[high]; // we select end element of array as a pivot element
  int i = low - 1;       // index of smaller element
  for (int j = low; j < high; j++)
  {
    if (arr[j] < pivot)
    {
      i++;
      swap(arr[j], arr[i]);
    }
  }
  swap(arr[i + 1], arr[high]);
  return i + 1;
}
void quickSort(int arr[], int low, int high)
{
  if (low < high)
  {
    int pivot = partition(arr, low, high);
    quickSort(arr, low, pivot - 1);
    quickSort(arr, pivot + 1, high);
  }
}
// main start here ...
int main()
{
  int size;
  cout << "Enter the size  of the array :" << endl;
  cin >> size;
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the  element at index: " << i << endl;
    cin >> n;
    arr[i] = n;
  }
  cout << "Before sorting :" << endl;
  printArr(arr, size);

  cout << "After sorting :" << endl;
  // sorting array
  quickSort(arr, 0, size - 1);
  printArr(arr, size);

  return 0;
}