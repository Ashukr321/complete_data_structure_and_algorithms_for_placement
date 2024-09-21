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

int *getMergeArr(int arr1[], int size1, int arr2[], int size2)
{
  int *mergedArr = new int[size1 + size2];
  for (int i = 0; i < size1; i++)
  {
    mergedArr[i] = arr1[i];
  }
  for (int i = 0; i < size2; i++)
  {
    mergedArr[i + size1] = arr2[i];
  }
  return mergedArr;
}

void bubbleSort(int arr[], int size)
{
  for (int i = 0; i < size - 1; i++)
  {
    for (int j = 0; j < size - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}
// main starts here ...
int main()
{
  int size1, size2;
  cout << "Enter the size of the array 1: ";
  cin >> size1;
  cout << "Enter the size of the array 2: ";
  cin >> size2;
  int *arr1 = new int[size1]; // dynamically allocate memory for arr1
  int *arr2 = new int[size2]; // dynamically allocate memory for arr2

  cout << "Enter the elements of arr1: " << endl;
  for (int i = 0; i < size1; i++)
  {
    int n;
    cout << "Enter the element at index: " << i << endl;
    cin >> n;
    arr1[i] = n;
  }

  cout << endl;
  cout << "Enter the elements of arr2: " << endl;
  for (int i = 0; i < size2; i++)
  {
    int n;
    cout << "Enter the element at index: " << i << endl;
    cin >> n;
    arr2[i] = n;
  }

  cout << "Elements of the arr 1: " << endl;
  printArr(arr1, size1);
  cout << endl;
  cout << "Elements of the arr 2: " << endl;
  printArr(arr2, size2);

  cout << "After merging arr1 and arr2: " << endl;
  int *arr3 = getMergeArr(arr1, size1, arr2, size2);
  printArr(arr3, size1 + size2);

  cout<<"After sorting: "<<endl;
  bubbleSort(arr3,size1+size2);
  printArr(arr3, size1 + size2);
  
  delete[] arr1; // free the dynamically allocated memory for arr1
  delete[] arr2; // free the dynamically allocated memory for arr2
  delete[] arr3; // free the dynamically allocated memory for arr3

  return 0;
}