#include <iostream>
using namespace std;

void printArr(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
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

    // swap ,we get min element from the array and placed at first index ,  n-1
    int temp = arr[minIndex];
    arr[minIndex] = arr[i];
    arr[i] = temp;
  }
}

int main()
{
  int size;
  cout << "Enter the size of the array :" << endl;
  cin >> size;
  int *arr = new int[size]; // dynamically allocate array

  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter your element at index:" << i << endl;
    cin >> n;
    arr[i] = n; // corrected indexing
  }

  cout << "Before selection sort :" << endl;
  printArr(arr, size);
  cout << endl;
  cout << "After selection sort:" << endl;
  selectionSort(arr, size);
  printArr(arr, size);

  delete[] arr; //  free the  memory using delete[] arr

  return 0;
}