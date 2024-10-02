// preprocessor
#include <iostream>
#include <vector>
using namespace std;
#include <algorithm>

void leftRotateByKthPos(vector<int> &arr, int k)
{
  k = k % arr.size();
  rotate(arr.begin(), arr.begin() + k, arr.end());
}
// main start here ...
int main()
{
  int size;
  cout << "Enter the size of the array: ";
  cin >> size;
  vector<int> arr;
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the element at index:" << i << endl;
    cin >> n;
    arr.push_back(n);
  }
  cout << "Before rotate array by k position" << endl;
  for (auto it = arr.begin(); it != arr.end(); it++)
  {
    cout << *it << " ";
  }
  cout << endl;
  int pos;
  cout << "Enter the position at which your want to rotate " << endl;
  cin >> pos;

  leftRotateByKthPos(arr, pos);
  for (auto it = arr.begin(); it != arr.end(); it++)
  {
    cout << *it << " ";
  }
  return 0;
}