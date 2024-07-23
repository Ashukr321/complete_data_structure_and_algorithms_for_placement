// preprocessor
#include <iostream>
using namespace std;

void leftRotationByKPosition(int arr[], int k, int size)
{
  k = k % size;

  for (int i = 0; i < k; i++)
  {
    int last = arr[0];
    for (int j = 0; j < size - 1; j++)
    {
      arr[j] = arr[j + 1];
    }
    arr[size - 1] = last;
  }
}

void printArray(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
}
// main start here ...
int main()
{
  int size;
  cout << "Enter the  size of the array " << endl;
  cin >> size;
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the element at index: " << i << endl;
    cin >> n;
    arr[i] = n;
  }

  cout << "before rotating array" << endl;
  printArray(arr, size);
  int position;
  cout << "Enter the position at which u want to rotate the array :" << endl;
  cin >> position;
  leftRotationByKPosition(arr, position, size);
  cout << "After  left rotating rotating by " << position << endl;
  printArray(arr, size);

  return 0;
}