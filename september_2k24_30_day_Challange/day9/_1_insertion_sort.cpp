// preprocessor
#include <iostream>
using namespace std;

void printArr(int arr[], int size)
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
    arr[j] = key;
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
    cout << "Enter your number :" << endl;
    cin >> n;
    arr[i] = n;
  }
  cout << "Before sorting:" << endl;
  printArr(arr, size);
  cout << endl;
  insertionSort(arr, size);
  printArr(arr, size);
  return 0;
}