// preprocessor
#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void moveZeroEND(int arr[], int size)
{
  int count = 0;
  for (int i = 0; i < size; i++)
  {
    if (arr[i] != 0)
    {
      arr[count] = arr[i];
      count++;
    }
  }
  while (count < size)
  {
    arr[count] = 0;
    count++;
  }
}

// main start here ...z
int main()
{
  int size;
  cout << "Enter the  size of the arrya :" << endl;
  cin >> size;
  int arr[size];
  // take the elements of the array
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the element at indeX:" << i << endl;
    cin >> n;
    arr[i] = n;
  }
  cout << "Before move zero end " << endl;
  printArray(arr, size);
  moveZeroEND(arr, size);
  cout << "After move zero end " << endl;
  printArray(arr, size);

  return 0;
}