#include <iostream>
using namespace std;

int countArrayElement(int arr[], int n, int count = 0)
{
  if (n == 0)
  {
    return count;
  }
  return countArrayElement(arr, n - 1, count + 1);
}

int main()
{
  int arr[] = {34, 34, 2, 5, 235, 325};
  int n = sizeof(arr) / sizeof(arr[0]);
  cout << countArrayElement(arr, n) << endl;
  return 0;
}