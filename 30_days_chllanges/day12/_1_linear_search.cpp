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

void printArray(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
}

// main start here ...
int main()
{
  int size;
  cout << "Enter the size of the the array :" << endl;
  cin >> size;
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the element at index: " << i << endl;
    cin >> n;
    arr[i] = n;
  }

  cout << "printing the array of the element : " << endl;
  printArray(arr, size);
  int target;
  cout << "Enter the target element: " << endl;
  cin >> target;

  int targetIndex = linearSearch(arr, size, target);
  if (targetIndex != -1)
  {
    cout << "The target element is at index: " << targetIndex << endl;
  }
  else
  {
    cout << "The target element is not found" << endl;
  }

  return 0;
}