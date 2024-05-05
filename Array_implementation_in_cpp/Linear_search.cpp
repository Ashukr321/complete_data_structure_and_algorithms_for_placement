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
  int target;
  cout << "Enter the size of the array " << endl;
  cin >> size;
  cout << "Enter the target element : " << endl;
  cin >> target;

  int arr[size];
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the element at index of the : " << i << endl;
    cin >> n;
    arr[i] = n;
  }

  int indexResult = linearSearch(arr, target, size);
  if (indexResult != -1)
  {
    cout << target << "Element is found at index of : " << indexResult << endl;
  }
  else
  {
    cout << indexResult << endl;
  }
  return 0;
}