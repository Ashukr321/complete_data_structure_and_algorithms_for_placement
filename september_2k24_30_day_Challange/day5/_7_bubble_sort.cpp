// preprocessor
#include <iostream>
using namespace std;
void bubbleSort(int arr[], int size)
{
  for (int i = 0; i < size - 1; i++)
  {
    for (int j = 0; j < size - 1 - i; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
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
  cout << "Array elements are: ";
  printArr(arr, size);
  cout << endl;
  cout << "before sorting :" << endl;
  printArr(arr, size);
  cout << endl;
  cout << "After sorting the array :" << endl;
  bubbleSort(arr, size);
  printArr(arr, size);
  return 0;
}