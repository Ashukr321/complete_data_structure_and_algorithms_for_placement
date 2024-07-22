// preprocessor
#include <iostream>
#include <algorithm>
using namespace std;

void displayArray(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << endl;
  }
}
// main start here ...
int main()
{
  int size;
  cout << "Enter the size of the array : " << endl;
  cin >> size;
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the element at index:" << i << endl;
    cin >> n;
    arr[i] = n;
  }
  cout << "before sorting : " << endl;
  displayArray(arr, size);
  cout << endl;
  cout << "After sorting the array :" << endl;
  sort(arr, arr + size);
  displayArray(arr, size);

  return 0;
}