// preprocessor
#include <iostream>
#include <algorithm>
using namespace std;

void reverseArray(int arr[], int size)
{
  for (int i = 0; i <= size / 2; i++)
  {
    swap(arr[i], arr[size - 1-i]);
  }
}

void printArray(int arr[],int size ){
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout<<endl;
}
// main start here ...
int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
  int size = sizeof(arr) / sizeof(arr[0]);
  reverseArray(arr,size);
  printArray(arr,size);
  return 0;
}