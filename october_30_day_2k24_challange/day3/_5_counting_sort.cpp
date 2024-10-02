// preprocessor
#include <iostream>
using namespace std;

void printArr(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
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
  // create max size array and initialize with 0
  int count[max + 1] = {0};

  //  get all element frequency
  for (int i = 0; i < size; i++)
  {
    count[arr[i]]++; // corrected frequency count
  }

  int j = 0;
  for (int i = 0; i <= max; i++)
  {
    while (count[i] > 0)
    {
      arr[j] = i;
      j++;
      count[i]--;
    }
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
    cout << "Enter the element at index:" << i << endl;
    cin >> n;
    arr[i] = n;
  }
  cout << "before sorting:" << endl;
  printArr(arr, size);
  cout << endl;
  cout << "After sorting :" << endl;
  countingSort(arr, size);
  printArr(arr, size);

  return 0;
}