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

void insertionSort(int arr[], int size)
{
  for (int i = 1; i < size; i++)
  {
    int key = arr[i];
    int j = i - 1;
    while (j >= 0&& arr[j] > key)
    {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = key;
  }
}
// main start here ...
int main()
{
  // size of the array
  int size;
  cout << "Enter the size of the array :" << endl;
  cin >> size;
  // create the array
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the  element at index:" << i << endl;
    cin >> n;
    arr[i] = n;
  }
  cout << "Before sorting :" << endl;
  printArray(arr, size);
  cout << "After sorting :" << endl;
  insertionSort(arr, size);
  printArray(arr, size);

  return 0;
}