// preprocessor
#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int binarySearch(int arr[],int low,int high,int target){
  if(low>high){
    return -1;
  }
  int mid = (low + high) / 2;
  if (arr[mid] == target)
  {
    return mid;
  }
  else if (arr[mid] > target)
  {
    return binarySearch(arr, low, mid - 1, target);
  }
  else
  {
    return binarySearch(arr, mid + 1, high, target);
  }
}
// main start here ...
int main()
{
  int size;
  cout << "Enter the size of the array " << endl;
  cin >> size;
  // create the array
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the element at index:" << i << endl;
    cin >> n;
    arr[i] = n;
  }
  printArray(arr, size);
  int target;
  cout << "Enter the target" << endl;
  cin >> target;
  int index = binarySearch(arr, 0, size - 1,target);
  if (index == -1)
  {
    cout << "Element not found in array" << endl;
  }
  else
  {
    cout << "Element found at index " << index << endl;
  }
  return 0;
}