#include <iostream>
#include <algorithm>
using namespace std;

void printArray(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void reverseArray(int arr[], int size)
{
  for (int i = 0; i < size / 2; i++)
  {
    swap(arr[i], arr[size - 1 - i]);
  }
}

int main()
{
  int size;
  cout << "Enter the size of the array :" << endl;
  cin >> size;
  // create the array
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the element :" << endl;
    cin >> n;
    arr[i] = n;
  }
  printArray(arr, size);
  // reverse the array
  reverseArray(arr, size);
  cout << "AFTER reverse the array :" << endl;
  printArray(arr, size);
}