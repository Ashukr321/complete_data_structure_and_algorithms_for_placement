// preprocessor
#include <iostream>
using namespace std;

int find_missing_number(int arr[], int size)
{
  int total_sum = (size * (size + 1)) / 2;
  int sum = 0;
  for (int i = 0; i < size; i++)
  {
    sum += arr[i];
  }
  return total_sum - sum;
}
// main start here ...
int main()
{
  int arr[] = {0, 1, 2, 3, 4, 5};
  int n = 6;
  cout << "Missing number " << find_missing_number(arr, n) << endl;
  return 0;
}