// preprocessor
#include <iostream>
using namespace std;

int minOfArray(int arr[], int n)
{
  //  base case
  if (n == 1)
  {
    return arr[0];
  }
  return min(arr[n - 1], minOfArray(arr, n - 1));
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
    cout << "Enter the element at index:" << i << endl;
    cin >> n;
    arr[i] = n;
  }
  cout << "Minimum of the array :" << minOfArray(arr, size) << endl;

  return 0;
}