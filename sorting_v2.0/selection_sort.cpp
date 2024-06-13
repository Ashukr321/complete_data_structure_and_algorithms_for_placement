// preprocessor
#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}
void printArray(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
}
void selectionSort(int arr[], int size)
{
  for (int i = 0; i < size - 1; i++)
  {
    int minIndex = i;
    for (int j = i + 1; j < size; j++)
    {
      if (arr[j] < arr[minIndex])
      {
        minIndex = j;
      }
    }
    swap(arr[minIndex], arr[i]);
  }
}

// main start here ...
int main()
{
  int size;
  cout << "Enter the size of  the array:" << endl;
  cin >> size;
  int arr[size];
  for (int i = 0; i < size; i++)

  {
    int n;
    cout << "Enter the element at index: " << i << endl;
    cin >> n;
    arr[i] = n;
  }

  cout << "before sorting the array :" << endl;
  printArray(arr, size);
  selectionSort(arr, size);
  cout << "after applying the section sort : " << endl;
  printArray(arr, size);

  return 0;
}

/*

selection sort tc = o(n^2)

*/