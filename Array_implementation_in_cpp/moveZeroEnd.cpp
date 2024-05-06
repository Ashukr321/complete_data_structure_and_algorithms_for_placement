// preprocessor
#include <iostream>
using namespace std;

void moveZeroEnd(int arr[], int size)
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
// printArray
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
  cout << "Enter the size of the array : " << endl;
  cin >> size;
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter element[" << i << endl;
    cin >> n;
    arr[i] = n;
  }

  cout << "Before zero move to end :" << endl;
  printArray(arr, size);
  moveZeroEnd(arr, size);
  cout << "\nAfter zero move to end"<<endl;
  printArray(arr, size);
  return 0;
}

/* 
 time complexity is o(n);
*/