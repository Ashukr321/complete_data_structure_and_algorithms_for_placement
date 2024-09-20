// preprocessor
#include <iostream>
using namespace std;

// Function to print an array
void printArr(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl; // Add a newline at the end
}

// Function to merge two sorted subarrays
void merge(int arr[], int l, int m, int h)
{
  int n1 = m - l + 1;
  int n2 = h - m;

  // Create temporary arrays
  int leftArr[n1], rightArr[n2];

  // Copy data to temporary arrays
  for (int i = 0; i < n1; i++)
    leftArr[i] = arr[l + i];
  for (int j = 0; j < n2; j++)
    rightArr[j] = arr[m + 1 + j];

  // Merge the temporary arrays
  int i = 0, j = 0, k = l;
  while (i < n1 && j < n2)
  {
    if (leftArr[i] <= rightArr[j])
    {
      arr[k] = leftArr[i];
      i++;
    }
    else
    {
      arr[k] = rightArr[j];
      j++;
    }
    k++;
  }

  // Copy remaining elements of leftArr[], if there are any
  while (i < n1)
  {
    arr[k] = leftArr[i];
    i++;
    k++;
  }

  // Copy remaining elements of rightArr[], if there are any
  while (j < n2)
  {
    arr[k] = rightArr[j];
    j++;
    k++;
  }
}

// Function to perform merge sort
void mergeSort(int arr[], int l, int h)
{
  if (l < h)
  {
    int mid = (l + h) / 2; // Fix the calculation of mid
    mergeSort(arr, l, mid);
    mergeSort(arr, mid + 1, h);
    merge(arr, l, mid, h); // Call the merge function
  }
}

// main start here ...
int main()
{
  int size;
  cout << "Enter the size of the array :" << endl;
  cin >> size;
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter element at index:" << i << endl;
    cin >> n;
    arr[i] = n;
  }
  int l = 0;
  int h = size - 1;
  cout << "Before sorting:" << endl;
  printArr(arr, size);

  mergeSort(arr, l, h); // Call the mergeSort function

  cout << "After sorting:" << endl;
  printArr(arr, size);

  return 0;
}