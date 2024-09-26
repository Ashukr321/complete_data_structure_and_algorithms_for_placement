// preprocessor
#include <iostream>
using namespace std;

int linearSearch(int arr[], int target, int size)
{
  for (int i = 0; i < size; i++)
  {
    if (arr[i] == target)
    {
      return i;
    }
  }
  return -1;
}
// main start here ...
int main()
{
  int size;
  cout << "Enter the size of the array :" << endl;
  cin >> size;
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the element at index :" << i << endl;
    cin >> n;
    arr[i] = n;
  }
  int target;
  cout << "Enter the target element  :" << endl;
  cin >> target;
  int targetIndex = linearSearch(arr, target, size);
  if (targetIndex != -1)
  {
    cout << "Target element found at index " << targetIndex << endl;
  }
  else
  {
    cout << "Target element not found" << endl;
  }

  return 0;
}