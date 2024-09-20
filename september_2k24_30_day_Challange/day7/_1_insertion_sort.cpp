// preprocessor
#include <iostream>
using namespace std;

void printArr(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl; // added to print a newline after printing the array
}
// insertion sort
void insertionSort(int arr[], int n)
{
  for (int i = 1; i < n; i++)
  {
    int key = arr[i];
    int j = i - 1;
    while (j >= 0 && arr[j] >key)
    {
      arr[j + 1] = arr[j];
      j = j - 1;
    }
    arr[j + 1] = key;
  }
}
// main starts here ...
int main()
{
  int size;
  cout << "Enter the size of the array: " << endl;
  cin >> size;
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the element at index: " << i << endl;
    cin >> n; // corrected to read into 'n' instead of 'size'
    arr[i] = n;
  }

  cout << "Before sorting:" << endl;
  printArr(arr, size);
  cout << "After sorting:" << endl;
  insertionSort(arr, size);
  printArr(arr, size);
  return 0;
}