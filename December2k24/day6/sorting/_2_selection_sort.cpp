// preprocessor
#include <iostream>
#include <algorithm>
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

void selectionSort(vector<int> &arr)
{
  for (int i = 0; i < arr.size(); i++)
  {
    int minIdex = i;
    for (int j = i + 1; j < arr.size(); j++)
    {
      if (arr[j] < arr[minIdex])
      {
        minIdex = j;
      }
    }
    swap(arr[i], arr[minIdex]);
  }
}
// main start here ...
int main()
{
  int size;
  cout << "Enter the size of the array :" << endl;
  cin >> size;
  vector<int> arr(size);
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the element at index " << i << endl;
    cin >> n;
    arr[i] = n;
  }
  cout << "Before selection sort :" << endl;
  printArr(arr);
  selectionSort(arr);
  cout << "After selection sort :" << endl;
  printArr(arr);

  return 0;
}
