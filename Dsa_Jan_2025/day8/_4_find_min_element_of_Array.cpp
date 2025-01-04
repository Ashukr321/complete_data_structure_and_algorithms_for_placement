// preprocessor
#include <iostream>
using namespace std;

int minOfArray(int arr[], int size)
{
  int min = INT_MAX;
  for (int i = 0; i < size; i++)
  {
    if (arr[i] < min)
    {
      min = arr[i];
    }
  }
  return min;
}
// main start here ...
int main()
{
  int size;
  cout << "enter the size of array : ";
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
  cout << "Minimum element  of the array :" << minOfArray(arr, size) << endl;

  return 0;
}