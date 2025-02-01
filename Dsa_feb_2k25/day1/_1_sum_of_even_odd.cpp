// preprocessor
#include <iostream>
using namespace std;

// main start here ...
int main()
{
  int arr[] = {0, 1, 2, 3, 4, 5, 6, 7};
  int size = sizeof(arr) / sizeof(arr[0]);
  int evenSum = 0;
  int oddSum = 0;
  for (int i = 0; i < size; i++)
  {
    if (arr[i] % 2 == 0)
    {
      evenSum += arr[i];
    }
    else
    {
      oddSum += arr[i];
    }
  }
  cout << "even sum " << evenSum << endl;
  cout << "odd sum " << oddSum << endl;
  return 0;
}