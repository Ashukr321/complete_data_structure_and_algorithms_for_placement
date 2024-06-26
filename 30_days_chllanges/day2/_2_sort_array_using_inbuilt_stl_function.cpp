#include <iostream>
#include <algorithm>
using namespace std;

void displayArray(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << endl;
  }
}

// main start here ...
int main()
{
  int size;
  cout << "Enter the size of the array: " << endl;
  cin >> size;

  int *arr = new int[size]; // create the  array  dynamically

  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the element at index: " << i << endl;
    cin >> n;
    arr[i] = n;
  }

  cout << "Before sorting:" << endl;
  displayArray(arr, size);

  sort(arr, arr + size);

  cout << "After sorting:" << endl;
  displayArray(arr, size);

  delete[] arr; // Don't forget to free the allocated memory
  return 0;
}
