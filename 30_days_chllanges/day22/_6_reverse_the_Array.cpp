// preprocessor
#include <iostream>
using namespace std;

void reverseArray(int arr[], int size)
{
  int i = 0;
  int j = size - 1;
  while (i <= j)
  {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    i++; // increment the first index:
    j--; // decrease the last index of the array
  }
}

void printArray(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << "   ";
  }
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
    cout << "Enter the element at index: " << i << ;
    cin >> n
               arr[i] = n;
  }
  cout << endl;
  cout << "before reversing the array : " << endl;
  printArray(arr, size);
  cout << endl;
  cout << endl;
  cout << "After reversing the array " << endl;
  reverseArray(arr, size);
  printArray(arr, size);

  return 0;
}