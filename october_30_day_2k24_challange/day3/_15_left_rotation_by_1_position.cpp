// preprocessor
#include <iostream>
#include <vector>
using namespace std;

vector<int> leftRotate(vector<int> arr, int size)
{
  int firstElemets = arr[0];
  vector<int> lRotate(arr.begin() + 1, arr.end());
  lRotate.push_back(firstElemets);
  return lRotate;
}
// main start here ...
int main()
{
  int size;
  cout << "Enter the size of the array " << endl;
  cin >> size;
  vector<int> arr;
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the element at index:" << i << endl;
    cin >> n;
    arr.push_back(n);
  }

  vector<int> result = leftRotate(arr, size);
  for (auto it = result.begin(); it != result.end(); it++)
  {
    cout << *it << " ";
  }
  return 0;
}