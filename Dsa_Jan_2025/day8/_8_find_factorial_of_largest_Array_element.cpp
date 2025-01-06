// preprocessor
#include <iostream>
using namespace std;

// max element
int maxElement(int arr[], int size)
{
  int max = arr[0];
  for (int i = 0; i < size; i++)
  {
    if (arr[i] > max)
    {
      max = arr[i];
    }
  }
  return max;
}

int factorial(int num)
{
  // base case
  if (num == 0 || num == 1)
  {
    return 1;
  };
  return num * factorial(num - 1);
}
// main start here ...
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
    cout << "Enter the element at index:" << i << endl;
    cin >> n;
    arr[i] = n;
  }
  int max = maxElement(arr, size);
  int factNum = factorial(max);
  cout << "The factorial of the largest element of the array is :" << factNum << endl;

  return 0;
}