// preprocessor
#include <iostream>
using namespace std;

void printArr(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
}
void moveZeroOneTwo(int arr[], int size)
{
  int z = 0, o = 0, t = 0;

  for (int i = 0; i < size; i++)
  {
    if (arr[i] == 0)
      z++;
    else if (arr[i] == 1)
      o++;
    else if (arr[i] == 2)
      t++;
  }

  int j = 0;

  while (z--)
  {
    arr[j++] = 0;
  }

  while (o--)
  {
    arr[j++] = 1;
  }

  while (t--)
  {
    arr[j++] = 2;
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

  cout << "Before move 0 1 and 2 " << endl;
  printArr(arr, size);
  cout << endl;
  cout << "After move :" << endl;
  moveZeroOneTwo(arr, size);

  printArr(arr, size);
  return 0;
}