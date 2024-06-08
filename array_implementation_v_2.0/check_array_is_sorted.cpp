// preprocessor
#include <iostream>
using namespace std;

bool isSorted(int arr[], int size)
{
  for (int i = 0; i < size - 1; i++)
  {
    if (arr[i] > arr[i +1 ])
    {
      return false;
    }
  }
  return true;
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
    cout << "Enter the element at index: " << i << endl;
    cin >> n;
    arr[i] = n;

    
  }

  if (isSorted(arr, size))
  {
    cout << "Arrays is sorted" << endl;
    for (int i = 0; i < size; i++)
    {
      cout << arr[i] << endl;
    }
  }
  else
  {
    cout << "array is not sorted: " << endl;
    for (int i = 0; i < size; i++)
    {
      cout << arr[i] << endl;
    }
  }

  return 0;
}