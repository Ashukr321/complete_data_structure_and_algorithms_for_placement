// preprocessor
#include <iostream>
using namespace std;

int missingNumber(int arr[], int n)
{
  int expectedSum = n * (n + 1) / 2;
  int actualSum;
  for (int i = 0; i < n -1; i++)
  {
    actualSum += arr[i];
  }
  return expectedSum - actualSum;
}

// main start here ...
int main()
{
  int arr[] = {1, 2, 3,  4,5,  6,7,8};
  int n = 8;
  if (missingNumber(arr, n) == 0)
  {
    cout << "No missing number" << endl;
  }
  else
  {
    cout << "Missing number is " << missingNumber(arr, n) << endl;
  }

  return 0;
}