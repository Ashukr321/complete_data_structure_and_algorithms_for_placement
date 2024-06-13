// preprocessor
#include <iostream>
using namespace std;

int maxSubArray(int arr[], int size)
{
  int maxSubArray = INT_MIN;
  for (int i = 0; i < size; i++)
  {
    int sum = 0;
    for (int j = i; i < size; i++)
    {
      sum += arr[i];
    }
    if (maxSubArray < sum)
    {
      maxSubArray = sum;
    }
  }
  return maxSubArray;
}
// tc = o(n^2);
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
  cout << "Enter   the size of the array :" << endl;
  cin >> size;
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the element at index: " << i << endl;
    cin >> n;
    arr[i] = n;
  }

  int data = maxSubArray(arr, size);
  cout << data << endl;
  printArray(arr, size);
  return 0;
}

// what is the kadans algorithms
// this is use for the get the maximum sub array sum of the elements
