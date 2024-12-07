// preprocessor
#include <iostream>
using namespace std;

void printArr(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void conquer(int arr[], int low, int mid, int high)
{
  // calculate merged size
  int mergedSize = high - low + 1;
  // create mergedArray
  int * mergedArray = new int [mergedSize];
  int idx1 = low;
  int idx2 = mid + 1;
  int x = 0;
  while (idx1 <= mid && idx2 <= high)
  {
    if (arr[idx1] <= arr[idx2])
    {
      mergedArray[x] = arr[idx1];
      idx1++;
      x++;
    }
    else
    {
      mergedArray[x] = arr[idx2];
      idx2++;
      x++;
    }
  }

  while (idx1 <= mid)
  {
    mergedArray[x] = arr[idx1];
    idx1++;
    x++;
  }
  while (idx2 <= high)
  {
    mergedArray[x] = arr[idx2];
    idx2++;
    x++;
  }


  for (int i = 0, j = low; i < mergedSize; i++, j++) {
    arr[j] = mergedArray[i];
  }

}
void mergeSort(int arr[], int low, int high)
{
  if (low >= high)
  {
    return;
  }
  // here we recursively break the array into two halves
  int mid = low + (high - low) / 2;
  mergeSort(arr, low, mid - 1);
  mergeSort(arr, mid + 1, high);

  conquer(arr, low, mid, high);
}

// main start here ...
int main()
{
  int size;
  cout << "Enter the size of the array :" << endl;
  cin >> size;
  int arr[size];
  cout << "Enter the elements of the array :" << endl;
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the element at index:" << i << endl;
    cin >> n;
    arr[i] = n;
  }
  cout << "Before merge sort  " << endl;
  printArr(arr, size);
  mergeSort(arr, 0, size - 1);
  cout << "After merge sort  " << endl;
  printArr(arr, size);

  return 0;
}
// time complexity O(n log n)
