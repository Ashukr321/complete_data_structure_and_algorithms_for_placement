// preprocessor
#include <iostream>
using namespace std;

int missingNum(int arr[], int n)
{
  int expectedSum = n * (n + 1) / 2;
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    sum += arr[i];
  }

  return expectedSum - sum;
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
    cout << "Enter the element at index:" << i << endl;
    cin >> n;
    arr[i] = n;
  }
  if (missingNum(arr, size) != 0)
  {
    cout << "Missing number is " << missingNum(arr, size) << endl;
  }
  else
  {
    cout << "No missing number" << endl;
  }

  return 0;
}