#include <iostream>
#include<algorithm>
using namespace std;

void printArr(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl; // added newline character
}

int partition(int arr[], int l, int h)
{
  int pivot = arr[h];
  int i = l - 1; // corrected initialization
  for (int j = l; j < h; j++)
  {
    if (arr[j] <= pivot)
    {
      i++;
      swap(arr[i], arr[j]);
    }
  }
  swap(arr[i + 1], arr[h]);
  return i + 1;
}

void quickSort(int arr[], int l, int h)
{
  if (l < h)
  {
    int pivot = partition(arr, l, h);
    quickSort(arr, l, pivot - 1);
    quickSort(arr, pivot + 1, h);
  }
}

int main()
{
  int size;
  cout << "Enter the size of the array :" << endl;
  cin >> size;
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the element at index: " << i << endl;
    cin >> n;
    arr[i] = n;
  }
  cout << "Before quick sort :" << endl;
  printArr(arr, size);
  cout << "After quick sort :" << endl;
  quickSort(arr, 0, size - 1);
  printArr(arr, size);
  return 0;
}