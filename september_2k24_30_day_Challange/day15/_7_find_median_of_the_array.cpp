// preprocessor
#include <iostream>
#include <algorithm>
using namespace std;

void bubbleSort(int arr[], int size)
{
  for (int i = 0; i < size - 1; i++)
  {
    for (int j = 0; j < size - 1 - i; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        swap(arr[i], arr[j + 1]);
      }
    }
  }
}
int findMedian(int arr[], int size)
{
  bubbleSort(arr, size);
  if (size % 2 != 0)
  {
    int index = size / 2;
    return arr[index];
  }
  else
  {
    int index = size / 2;
    return (arr[index - 1] + arr[index]) / 2.0; 
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
    cout << "Enter the element at index: " << i << endl;
    cin >> n;
    arr[i] = n;
  }
  cout << "Median of the array :" << findMedian(arr, size) << endl;
  return 0;
}