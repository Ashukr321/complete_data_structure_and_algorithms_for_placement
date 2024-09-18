// preprocessor
#include <iostream>
using namespace std;

int maxOfArray(int arr[], int size)
{
  if (size == 1)
  {
    return arr[0];
  }
  //  recursive call
  return max(arr[size - 1], maxOfArray(arr, size - 1));
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

  cout << "Maximum element of the array :" << maxOfArray(arr, size) << endl;

  return 0;
}