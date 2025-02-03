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

void moverZeroEnd(int arr[], int size)
{
  int count = 0;
  for (int i = 0; i < size; i++)
  {
    if (arr[i] != 0)
    {
      arr[count++] = arr[i];
    }
  }
  while (count < size)
  {
    arr[count] = 0;
    count++;
  }
}
// main start here ...
int main()
{
  int size;
  cout << "Enter the  size of  the array " << endl;
  cin >> size;
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the element " << i + 1 << " of the array " << endl;
    cin >> n;
    arr[i] = n;
  }
  cout << "Before move zero end " << endl;
  printArray(arr, size);
  cout << "After move zero end" << endl;
  moverZeroEnd(arr, size);
  printArray(arr, size);

  return 0;
}