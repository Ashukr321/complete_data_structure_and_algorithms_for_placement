// preprocessor
#include <iostream>
using namespace std;

int countArrElements(int arr[], int size)
{
  //  base case
  if (size == 1)
  {
    return 1;
  }
  return 1 + countArrElements(arr, size - 1); // recursive call
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
    cout << "Enter your element at index:" << i << endl;
    cin >> n;
    arr[i] = n;
  }
  cout << "Number of the elements in the array :" << countArrElements(arr, size) << endl;

  return 0;
}