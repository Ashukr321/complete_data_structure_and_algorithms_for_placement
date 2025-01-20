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

int partition(int arr[], int low, int high)
{
  int pivot = arr[high];
  int i = low - 1;
  for (int j = low; j < high; j++)
  {
    if (arr[j] <= pivot)
    {
      i++;
      swap(arr[i], arr[j]);
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
  cout << "Enter the size of array : ";
  cin >> size;
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the number of elements" << endl;
    cin >> n;
    arr[i] = n;
  }
  printArray(arr, size);
  cout << "After quick sort " << endl;
  quickSort(arr, 0, size - 1); // we have to pass the low and high values
  printArray(arr, size);
  return 0;
}