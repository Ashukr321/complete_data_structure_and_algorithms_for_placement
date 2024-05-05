// preprocessor
#include <iostream>
using namespace std;

bool isSorted(int arr[], int size)
{
  for (int i = 0; i < size - 1; i++)
  {
    if (arr[i] > arr[i + 1])
    {
      return false; // If any element is greater than its next element, the array is not sorted.
    }
  }
  return true; // If all elements are in non-decreasing order, the array is sorted.
}


// main start here ...
int main()
{

  int size;
  cout << "Enter the size of the array : " << endl;
  cin >> size;
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the element at index : " << i << endl;
    cin >> n;
    arr[i] = n;
  }

  bool sortedarr = isSorted(arr, size);
  if (sortedarr)
  {
    cout << "The given array is already sorted." << endl;
  }
  else
  {
    cout << "The given array is not sorted. Sorting it..." << endl;
  }

  return 0;
}