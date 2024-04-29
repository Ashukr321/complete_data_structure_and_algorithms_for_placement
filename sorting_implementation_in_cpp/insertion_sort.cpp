// preprocessor
#include <iostream>
using namespace std;

void printAarray(int arr[], int n)
{
  for (int i = 0; i < n; i++)
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
    arr[j + 1] = key;
  }
}

// main start here ...
int main()
{
  int size;
  cout << "Enter the size of the array : " << endl;
  cin >> size;
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the element at index : " << i << endl;
    cin >> n;
    arr[i] = n;
  }

  cout << "before sorting" << endl;
  printAarray(arr, size);
  cout << "After sorting : " << endl;
  insertionSort(arr, size);
  printAarray(arr, size);

  return 0;
}

/*
 time complexity of the algorithms
 o(n^2)  worst case  time complexity
 sorting  types

     quick sort O(nlogn)
     bubble sort  o(n^2)
     heap sort  O(nlogn)
     insertion sort  o(n^2)
     selection sort  o(n^2)
     MERGE sort  o(nlogn)
     radix sort ( n*k )
     counting sort O(n+k)
     bucket sort o(n+k)
     intro sort
     tim sort
*/