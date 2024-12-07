// preprocessor
#include <iostream>
#include <vector>
using namespace std;

void printArr(vector<int> arr)
{
  for (int i = 0; i < arr.size(); i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void insertionSort(vector<int> &arr)
{
  for (int i = 1; i < arr.size(); i++)
  {
    int key = arr[i];
    int j = i - 1;
    while (j >= 0 && arr[j] > key)
    {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = key;
  }
}
// main start here ...
int main()
{
  int size;
  cout << "Enter the size of the array: ";
  ;
  cin >> size;
  vector<int> arr(size); // create the array with dynamic size vector

  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the element at index: " << i << endl;
    cin >> n;
    arr[i] = n;
  }

  printArr(arr);
  insertionSort(arr);
  cout << endl;
  cout << "After insertion sort :" << endl;
  printArr(arr);
  return 0;
}