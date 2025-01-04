// preprocessor
#include <iostream>
using namespace std;

int averageOfArray(int arr[], int size)
{
  int sum = 0;
  for (int i = 0; i < size; i++)
  {
    sum += arr[i];
  }
  return sum / size;
}
// main start here ...
int main()
{
  int size;
  cout << "Enter the size of the array " << endl;
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
  cout << "Average  of the array :" << averageOfArray(arr, size) << endl;

  return 0;
}