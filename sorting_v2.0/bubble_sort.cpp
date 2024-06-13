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

void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

void bubbleSort(int arr[], int size)
{
  for (int i = 0; i < size - 1; i++)
  {
    for (int j = 0; j < size - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        swap(&arr[j], &arr[j + 1]);
      }
    }
  }
}

// main starts here ...
int main()
{
  cout << "Bubble sort in the array:" << endl;
  int size;
  cout << "Enter the size of the array: ";
  cin >> size;
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    cout << "Enter the element at index " << i << ": ";
    cin >> arr[i];
  }

  cout << "Before sorting the array: " << endl;
  printArray(arr, size);

  bubbleSort(arr, size);

  cout << "After sorting the array: " << endl;
  printArray(arr, size);

  return 0;
}


// time complexity of the bubble sort is the o(n^2);