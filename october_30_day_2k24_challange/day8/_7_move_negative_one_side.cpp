// preprocessor
#include <iostream>
#include <algorithm>
using namespace std;

void printArr(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
}

void moveNegativeOneSide(int arr[], int size)
{
  int i = 0;
  for (int j = 0; j < size; j++)
  {
    if (arr[j] < 0)
    {
      swap(arr[i], arr[j]);
      i++;
    }
  }
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
  cout << "Before move negative one side :" << endl;
  printArr(arr, size);
  cout << endl;
  moveNegativeOneSide(arr, size);
  cout << "After move -ve one side :" << endl;

  printArr(arr, size);

  return 0;
}