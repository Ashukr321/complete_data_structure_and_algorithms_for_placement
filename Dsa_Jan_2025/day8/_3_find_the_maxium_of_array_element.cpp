// preprocessor
#include <iostream>
using namespace std;

int maxOfArray(int arr[], int size)
{
  int max = arr[0];
  for (int i = 0; i < size; i++)
  {
    if (arr[i] > max)
    {
      max = arr[i];
    }
  }
  return max;
}

// main start here ...
int main()
{
  int size;
  cout << "Enter the element at index:" << endl;
  cin >> size;
  // create the array
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the element at index:" <<  i << endl;
    cin >> n;
    arr[i] = n;
  }
  cout << "Max element of the array :" << maxOfArray(arr, size) << endl;
  return 0;
}