// preprocessor
#include <iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
  for (int i = 0; i < n - 1; i++)
  {
    int minIndex = i;
    for (int j = i + 1; j < n; j++)
    {
      if (arr[j] < arr[minIndex])
      {
        minIndex = j;
      }
    }
    int temp = arr[minIndex];
    arr[minIndex] = arr[i];
    arr[i] = temp;
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
  cout << "Enter the size  of the array :" << endl;
  cin >> size;
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the element at index:" << i << endl;
    cin >> n;
    arr[i] = n;
  }
  cout << "before sorting " << endl;
  printArray(arr, size);
  cout << endl;
  cout << "After sorting the array " << endl;
  selectionSort(arr,size);
  printArray(arr,size);
  return 0;
}