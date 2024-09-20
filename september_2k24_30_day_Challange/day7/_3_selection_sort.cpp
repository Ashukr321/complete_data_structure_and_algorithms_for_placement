// preprocessor
#include <iostream>
using namespace std;
void selectionSort(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    int minIndex = i;
    for (int j = i + 1; j < size; j++)
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
  cout << "Enter the size of array: ";
  cin >> size;
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the element " << i + 1 << " : ";
    cin >> n;
    arr[i] = n;
  }
  cout << "Before sorting:" << endl;
  printArr(arr, size);
  cout << endl;
  cout << "After sorting:" << endl;
  selectionSort(arr, size);
  printArr(arr, size);

  return 0;
}