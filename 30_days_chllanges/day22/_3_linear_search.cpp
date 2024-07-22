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
  cout << "Enter the size of the array " << endl;
  cin >> size;
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the element at index: " << i << endl;
    cin >> n;
    arr[i] = n;
  }
  int target;
  cout << "Enter the target element : " << endl;
  cin >> target;

  if (linearSearch(arr, size, target) != -1)
  {
    cout << "The target element is present at index " << linearSearch(arr, size, target) << endl;
  }
  else
  {
    cout << "The target element is not present in the array" << endl;
  }

  return 0;
}