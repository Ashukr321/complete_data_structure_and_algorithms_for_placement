// preprocessor
#include <iostream>
#include <algorithm>
using namespace std;

// print Array
void printArray(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
}

void bubbleSort(int arr[], int size)
{
  for (int i = 0; i < size - 1; i++)
  {
    for (int j = 0; j < size - 1 - i; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        swap(arr[j], arr[j + 1]);
      }
    }
  }
}
// main start here ...
int main()
{
  int size;
  cout << "Enter size of the array :" << endl;
  cin >> size;
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter element at index:" << i << endl;
    cin >> n;
    arr[i] = n;
  }
  cout << "Print array :" << endl;
  printArray(arr, size);
  cout << endl;
  cout << "After sorting:" << endl;
  bubbleSort(arr, size);
  printArray(arr, size);

  return 0;
}