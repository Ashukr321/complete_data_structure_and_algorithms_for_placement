// preprocessor
#include <iostream>
using namespace std;

int countZero(int arr[], int size, int cntZero = 0)
{
  if (size == 0) 
  {
    return cntZero;
  }
  if (arr[size - 1] == 0)
  {
    cntZero = cntZero + 1;
  }

  return countZero(arr, size - 1, cntZero); 
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
    cout << "Enter element at index: " << i << endl;
    cin >> n;
    arr[i] = n;
  }
  cout << "Number of Zero in array :" << countZero(arr, size) << endl;

  return 0;
}