// preprocessor
#include <iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    int minIndex = i;
    for (int j = i + 1; j < n; j++)
    {
      if (arr[j] < arr[minIndex])
      {
        minIndex = j;
      }
    }
    int temp = arr[minIndex];
    arr[minIndex] = arr[i];
    arr[i] = temp;
  }
}

void printArr(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
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
    cout << "Enter the element " << i + 1 << " of the array: ";
    cin >> n;
    arr[i] = n;
  }

  cout << "Before sorting the array :" << endl;
  printArr(arr, size);
  cout << "After sorting :" << endl;

  selectionSort(arr, size);
  printArr(arr, size);

  return 0;
}