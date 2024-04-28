// preprocessor
#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
  int temp = a;
  a = b;
  b = temp;
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

void printArray(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
}

// main start here ...
int main()
{

  int size;
  cout << "Enter the size  of the array !" << endl;
  cin >> size;
  int arr[size];
  
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the element at index: " << i << endl;
    cin >> n;
    arr[i] = n;
  }

  cout << "before selection sorting : " << endl;
  printArray(arr, size);
  cout << "After sorting" << endl;
  selectionSort(arr, size);

  printArray(arr, size);

  return 0;
}


/*
 trick -> bubble sort -> big goes into the end of the array 
 selection sort -> s -> smaller element goes into the  starting of the array 
*/