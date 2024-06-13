// preprocessor
#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
}

void insertionSort(int arr[], int size)
{
  for (int i = 1; i < size; i++)
  {
    int key = arr[i];
    int j = i - 1;
    while (j >= 0 && arr[j] > key)
    {
      arr[j + 1] = arr[j];
      j = j - 1;
    }
    arr[j + 1] = key;
  }
}

// main start here ...
int main()
{
  int size;
  cout << "Enter the size of the array : " << endl;
  cin >> size;
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the elment at index: " << i << endl;
    cin >> n;
    arr[i] = n;
  }
  cout << "before sorting: " << endl;
  printArray(arr, size);
  cout << endl;
  cout << "After applying the insertion sort : " << endl;
  insertionSort(arr, size);
  printArray(arr, size);

  return 0;
}

//time complexity of the insertions  is the o(n^2);
