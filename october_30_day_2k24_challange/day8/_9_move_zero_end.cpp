// preprocessor
#include <iostream>
using namespace std;

void printArr(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl; // added to move to a new line after printing the array
}
void moveZeroEnd(int arr[], int size)
{
  int j = 0;
  for (int i = 0; i < size; i++)
  {
    if (arr[i] != 0)
    {
      arr[j] = arr[i];
      j++;
    }
  }
  for (int i = j; i < size; i++)
  {
    arr[i] = 0; // corrected the indexing
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
  cout << "Before moving zeros to the end:" << endl;
  printArr(arr, size);
  moveZeroEnd(arr, size);
  cout << "After moving zeros to the end:" << endl;
  printArr(arr, size);
  return 0;
}