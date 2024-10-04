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
  cout << "Before move zero 1 side " << endl;

  printArr(arr, size);
  cout << endl;
  cout << "After move negative end 1 Side " << endl;
  moveNegativeOneSide(arr, size);
  printArr(arr, size);
  return 0;
}