// preprocessor
#include <iostream>
using namespace std;

int findMedian(int arr[], int size)
{
  int median;
  if (size % 2 == 0)
  {
    return median = arr[(arr[size / 2] + arr[size / 2 - 1]) / 2];
  }
  else
  {
    return median = arr[size / 2];
  }
}

// main start here ...
int main()
{
  int size;
  cout << "Enter the size of array :";
  cin >> size;
  // create the array
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the element at index:" << i << endl;
    cin >> n;
    arr[i] = n;
  }
  cout << "The median of the array is :" << findMedian(arr, size) << endl;
  return 0;
}