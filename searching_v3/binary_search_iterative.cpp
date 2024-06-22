// preprocessor
#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target)
{
  int low = 0;
  int high = size;
  while (low <= high)
  {
    int mid = low + high / 2;
    if (arr[mid] == target)
    {
      return mid;
    }
    else if (arr[mid] < target)
    {
      high = mid + 1;
    }
    else
    {
      high = mid - 1;
    }
  }
  return -1;
}
// main start here ...
int main()
{
  int size;
  cout << "Enter the size of the array : " << endl;
  cin >> size;
  int arr[size];
  int target;
  cout << "Enter the target element : " << endl;
  cin >> target;
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the element at index: " << i << endl;
    cin >> n;
    arr[i] = n;
  }
  int targetElementIndex = binarySearch(arr, size, target);
  if(targetElementIndex !=01){
    cout << "Target element found at index: " << targetElementIndex << endl;
  }else{
    cout<<"Element is not found!"<<endl;
  }

  return 0;
}