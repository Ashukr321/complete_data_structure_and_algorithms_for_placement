// preprocessor
#include <iostream>
#include <algorithm>
using namespace std;

// printArr
void printArr(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
}
void dnfSort(int arr[], int size)
{
  int low = 0;
  int mid = 0;
  int high = size - 1;
  while (mid <= high)
  {
    if (arr[mid] == 0)
    {
      swap(arr[low], arr[mid]);
      low++;
      mid++;
    }
    else if (arr[mid] == 1)
    {
      mid++;
    }
    else
    {
      swap(arr[mid], arr[high]);
      high--;
    }
  }
}
// main start here ...
int main()
{
  int size;
  cout << "Enter the  size of the array :" << endl;
  cin >> size;
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the element at index:" << i << endl;
    cin >> n;
    arr[i] = n;
  }
  cout << "Before sorting :" << endl;
  printArr(arr, size);
  cout << endl;
  dnfSort(arr, size);
  cout << "After dnf sort :" << endl;
  printArr(arr, size);

  return 0;
}