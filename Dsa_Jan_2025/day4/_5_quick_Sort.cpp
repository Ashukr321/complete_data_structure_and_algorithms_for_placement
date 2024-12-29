// preprocessor
#include <iostream>
#include <algorithm>
using namespace std;

void printArr(int arr[], int size)
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
    if (arr[j] >= pivot)
    {
      i++;
      swap(arr[i+1], arr[j]);
    }
  }
  swap(arr[i + 1], arr[end]);
  return i + 1;
}

void quicksort(int arr[], int start, int high)
{
  if (start <= high)
  {
    int pivot = partition(arr, start, high);
    quicksort(arr, start, pivot - 1);
    quicksort(arr, pivot + 1, high);
  }
}
// main start here ...
int main()
{
  int size;
  cout << "Enter the size of array : ";
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
  cout << "Before sorting : ";
  printArr(arr, size);

  cout << "Quick sort " << endl;
  quicksort(arr, 0, size - 1);
  cout << "After  quick sort :" << endl;
  printArr(arr, size);
  return 0;
}