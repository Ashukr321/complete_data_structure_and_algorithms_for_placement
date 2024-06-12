// preprocessor
#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target)
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
  int target;
  cout << "Enter the size of the coding : " << endl;
  cin >> size;
  cout << "Enter the target element :" << endl;
  cin >> target;

  int arr[size];

  for (int i = 0; i < size; i++)
  {
    int n;

    cout << "Enter the element at index: " << i << endl;
    cin >> n;
    arr[i] = n;
  }

  int targetElementIndex = linearSearch(arr, size, target);
  if (targetElementIndex != -1)
  {
    cout << "Element is present at index of : " << targetElementIndex << endl;
  }
  else
  {
    cout << "Element is not present  in the array :" << endl;
  }

  return 0;
}