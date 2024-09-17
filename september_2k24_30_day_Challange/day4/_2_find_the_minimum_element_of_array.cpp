// preprocessor
#include <iostream>
using namespace std;

int findMin(int arr[], int size)
{
  // base case
  if (size == 1)
  {
    return arr[0];
  }
  return min(arr[size - 1], findMin(arr, size - 1));
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
    cout << "Enter the  element at index" << i << endl;
    cin >> n;
    arr[i] = n;
  }
  cout << "Minimum Element at index: " << findMin(arr, size) << endl;
  return 0;
}
