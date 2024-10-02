// preprocessor
#include <iostream>
using namespace std;

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
  for (int i = j; j < size; j++)
  {
    arr[j] = 0;
  }
}
// main start here ...
int main()
{
  int arr[] = {1, 0, 4, 0};
  moveZeroEnd(arr, 4);
  for (int i = 0; i < 4; i++)
  {
    cout << arr[i] << endl;
  }

  return 0;
}