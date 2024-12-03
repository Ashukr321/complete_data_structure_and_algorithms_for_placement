// preprocessor
#include <iostream>
using namespace std;

void move_zero_end(int arr[], int size)
{
  int cnt = 0;
  for (int i = 0; i < size; i++)
  {
    if (arr[i] != 0)
    {
      arr[cnt] = arr[i];
      cnt++;
    }
  }

  while (cnt < size)
  {
    arr[cnt] = 0;
    cnt++;
  }
}
void printArr(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
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

  printArr(arr, size);
  cout << endl;
  move_zero_end(arr, size);
  printArr(arr, size);

  return 0;
}