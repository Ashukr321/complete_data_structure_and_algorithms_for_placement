// preprocessor
#include <iostream>
#include <algorithm>
using namespace std;

void displayArr(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

// 1 bubble sort
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

// 2 selection sort
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

    swap(arr[i], arr[minIndex]);
  }
}

void countingSort(int arr[], int size)
{
  int max = arr[0];
  for (int i = 0; i < size; i++)
  {
    if (arr[i] > max)
    {
      max = arr[i];
    }
  }

  int countArr[max + 1] = {0};
  // calculate frequency
  for (int i = 0; i < size; i++)
  {
    countArr[arr[i]]++;
  }

  int j = 0;
  for (int i = 0; i <= max; i++)
  {
    while (countArr[i] > 0)
    {
      arr[j] = i;
      j++;
      countArr[i]--;
    }
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
      j--;
    }
    arr[j + 1] = key;
  }
}

// 5 quick sort
int partition(int arr[], int low, int high)
{
  int pivot = arr[high];
  int i = low - 1;
  for (int j = low; j < high; j++)
  {
    if (arr[j] <= pivot)
    {
      i++;
      swap(arr[i], arr[j]);
    }
  }
  swap(arr[i + 1], arr[high]);
  return i + 1;
}
void quickSort(int arr[], int low, int high)
{
  if (low < high)
  {
    int pivot = partition(arr, low, high);
    quickSort(arr, low, pivot - 1);
    quickSort(arr, pivot + 1, high);
  }
}
// main start here ...
int main()
{
  int size;
  cout << "Enter the size of array : ";
  cin >> size;
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the element : ";
    cin >> n;
    arr[i] = n;
  }

  cout << "1. bubble sort :" << endl;
  bubbleSort(arr, size);
  displayArr(arr, size);
  cout << endl;

  cout << "2. selection sort :" << endl;
  selectionSort(arr, size);
  displayArr(arr, size);
  cout << endl;

  cout << "3. counting sort :" << endl;
  countingSort(arr, size);
  displayArr(arr, size);
  cout << endl;

  cout << "4. insertion sort :" << endl;
  insertionSort(arr, size);
  displayArr(arr, size);
  cout << endl;

  cout << "5. Quick sort !" << endl;
  quickSort(arr, 0, size - 1);
  displayArr(arr, size);

  return 0;
}