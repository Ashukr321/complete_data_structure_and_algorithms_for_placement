// preprocessor
#include <iostream>
#include<algorithm>
using namespace std;

void printArr(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
}
void reverseArr(int arr[], int size)
{
  int i = 0;
  int j = size - 1;
  while (i < j)
  {
    swap(arr[i],arr[j]);
    i++ ;
    j--;
  }
}
// main start here ...
int main()
{
  int size;
  cout << "Enter the size of the array:" << endl;
  cin >> size;
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the element at index:" << i << endl;
    cin >> n;
    arr[i] = n;
  }

  cout << "Before reversing :" << endl;
  reverseArr(arr, size);
  printArr(arr, size);
  return 0;
}