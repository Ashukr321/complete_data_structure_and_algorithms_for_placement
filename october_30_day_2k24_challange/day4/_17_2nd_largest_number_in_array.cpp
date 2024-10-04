// preprocessor
#include <iostream>
#include <algorithm>
using namespace std;

void bubbleSort(int arr[], int size)
{
  for (int i = 0; i < size - 1; i++)
  {
    for (int j = 0; j < size - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        swap(arr[j], arr[j + 1]);
      }
    }
  }
}
int secondLargestNum(int arr[], int size)
{
  bubbleSort(arr, size);
  return arr[size - 2];
}

// main start here ...
int main()
{
  int size;
  cout << "Enter the size of the  array " << endl;
  cin >> size;
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the element at index:" << i << endl;
    cin >> n;
    arr[i] = n;
  }
  cout << "2nd Largest Number:" << secondLargestNum(arr, size) << endl;

  return 0;
}