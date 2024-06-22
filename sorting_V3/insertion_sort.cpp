// preprocessor
#include <iostream>
using namespace std;

void displayArray(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << "  ";
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
      j--;
    }
    arr[j + 1] = key;
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
    cout << "Enter the element " << i + 1 << ": ";
    cin >> n;
    arr[i] = n;
  }

  cout << "before sorting: " << endl;
  displayArray(arr, size);
  cout << "After applying insertion  sort ! " << endl;
  insertionSort(arr, size);
  cout << endl;
  displayArray(arr, size);
  return 0;
}