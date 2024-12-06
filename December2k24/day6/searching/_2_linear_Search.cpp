// preprocessor
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int linearSearch(vector<int> arr, int target)
{
  for (int i = 0; i < arr.size(); i++)
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
  cout << "Enter the size of the array  " << endl;
  cin >> size;
  vector<int> arr(size);
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the element at index:" << i << endl;
    cin >> n;
    arr[i] = n;
  }
  int target;
  cout << "Enter the target element to be searched" << endl;
  cin >> target;
  int result = linearSearch(arr, target);
  if (result != -1)
  {
    cout << "element is found at index:" << result<< endl;
  }
  else
  {
    cout << "element is not found" << endl;
  }

  return 0;
}