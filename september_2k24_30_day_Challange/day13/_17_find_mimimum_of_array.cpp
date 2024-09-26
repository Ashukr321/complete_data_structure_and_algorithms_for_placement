// preprocessor
#include <iostream>
using namespace std;

int minArr(int arr[], int size)
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
  cout << "Enter the size of the array :" << endl;
  cin >> size;
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter elements at index:" << i << endl;
    cin >> n;
    arr[i] = n;
  }
  cout << "Minimum of the array :" << minArr(arr, size) << endl;

  return 0;
}