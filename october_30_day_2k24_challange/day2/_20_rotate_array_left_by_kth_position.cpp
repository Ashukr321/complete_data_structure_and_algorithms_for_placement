// preprocessor
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void printArr(vector<int> num)
{
  for (auto it = num.begin(); it != num.end(); it++)
  {
    cout << *it << " ";
  }
}
void rotateArrByKthPos(vector<int> &arr, int k)
{
  k = k % arr.size();
  rotate(arr.begin(), arr.begin() + k, arr.end());
}
// main start here ...
int main()
{
  int size;
  cout << "Enter the size of the vector " << endl;
  cin >> size;
  vector<int> arr;
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the element at index:" << i << endl;
    cin >> n;
    arr.push_back(n);
  }

  cout << "Before rotate by k position" << endl;
  printArr(arr);

  int pos;
  cout << "Enter the postion at which you want to rotate the array " << endl;
  cin >> pos;
  cout << "After rotating th array by " << pos << endl;
  rotateArrByKthPos(arr, pos);
  printArr(arr);

  return 0;
}