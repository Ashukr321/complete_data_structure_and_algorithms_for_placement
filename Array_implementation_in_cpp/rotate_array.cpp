// preprocessor
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printArray(vector<int> arr)
{
  for (auto it : arr)
  {
    cout << it << " ";
  }
}

void rotationArray(vector<int> &arr, int k)
{
  rotate(arr.begin(), arr.begin() + k, arr.end());
}
// main start here ...
int main()
{
  vector<int> arr = {1, 2, 3, 4, 5, 6};
  int k;
  cout << "Enter the  kth position of rotation : " << endl;
  cin >> k;
  cout << "before rotation" << endl;
  printArray(arr);
  cout << "After rotating: " << k << "th position  :" << endl;
  rotationArray(arr, k);
  printArray(arr);
  return 0; 
}

/*
 time complexity of the rotation is : o(n) ->  linear time complexity
 space complexity  : o(1); -> constant
*/