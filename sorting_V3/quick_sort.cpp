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

void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

int partition(int arr[], int low, int high)
{
  int pivot = arr[high]; // choose the last element as a pivote element ;
  int i = low - 1;       // index of the smaller element

  for (int j = low; j < high; j++)
  {
    if (arr[j] < pivot)
    {
      i++;
      swap(&arr[i], &arr[j]);
    }
  }

  swap(&arr[i + 1], &arr[high]);
  return i + 1;
}

void quickSort(int arr[], int low, int high)
{
  if (low < high)
  {
    int pivotIndex = partition(arr, low, high);

    quickSort(arr, low, pivotIndex - 1);
    quickSort(arr, pivotIndex, high);
  }
}

int main()
{
  int size;
  cout << "Enter the size of the array: " << endl;
  cin >> size;
  int* arr = new int[size]; // dynamically allocate array

  for (int i = 0; i < size; i++)
  {
    cout << "Enter the element at index: " << i << endl;
    cin >> arr[i];
  }

  cout << "Before sorting the array : " << endl;
  displayArray(arr, size);
  cout << endl;
  cout << "After quick sort : " << endl;
  quickSort(arr, 0, size - 1);
  displayArray(arr, size);

  delete[] arr; // deallocate array
  return 0;
}