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
    swap(arr[minIndex], arr[i]);
  }
}

// 3. insertion sort
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

/// 4 counting sort
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

  // count array
  int countArr[max+1] = {0};
  // calculate  freq
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
    cout << "Enter the element at index:" << i << endl;
    cin >> n;
    arr[i] = n;
  }

  cout << "Before bubble sort :" << endl;
  displayArr(arr, size);
  cout << endl;
  cout << "After bubble sort :" << endl;
  bubbleSort(arr, size);
  displayArr(arr, size);
  cout << endl;

  cout << "2. Selection sort :" << endl;
  selectionSort(arr, size);
  displayArr(arr, size);

  cout << endl;
  cout << "3 insertion sort :" << endl;
  insertionSort(arr, size);
  displayArr(arr, size);

  cout << endl;
  cout << "4 counting sort :" << endl;
  countingSort(arr, size);
  displayArr(arr, size);

  return 0;
}