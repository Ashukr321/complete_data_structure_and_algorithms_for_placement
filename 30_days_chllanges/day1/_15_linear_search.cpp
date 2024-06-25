// preprocessor
#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target)
{
  for (int i = 0; i < size; i++)
  {
    if (arr[i] == target)
    {
      return i;
    }
  }

  return -1;
}
// main start here ...
int main()
{
  int size;
  int target;
  cout << "Enter the size of the array : " << endl;
  cin >> size;
  int arr[size];
  cout << "Enter the target element that you want to  find : " << endl;
  cin >> target;
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the element at index: " << i << endl;
    cin >> n;
    arr[i] = n;
  }

  int targetElement = linearSearch(arr, size, target);
  if (targetElement != -1)
  {
    cout << "The target element is present at index : " << targetElement << endl;
  }
  else
  {
    cout << "Element no found in the aray" << endl;
  }
  return 0;
}