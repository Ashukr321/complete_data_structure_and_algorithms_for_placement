// preprocessor
#include <iostream>
using namespace std;

void printArr(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl; // added to print a newline after printing the array
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

  int* countArr = new int[max + 1](); 

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
  delete[] countArr; 
}

// main start here ...
int main()
{
  int size;
  cout << "Enter the size of the array :" << endl;
  cin >> size;
  int* arr = new int[size];
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the element at index:" << i << endl;
    cin >> n;
    arr[i] = n;
  }
  cout << "Before sorting:" << endl;
  printArr(arr, size);
  cout << endl;
  cout << "After sorting:" << endl;
  countingSort(arr, size);
  printArr(arr, size);
  delete[] arr; 
  return 0;
}