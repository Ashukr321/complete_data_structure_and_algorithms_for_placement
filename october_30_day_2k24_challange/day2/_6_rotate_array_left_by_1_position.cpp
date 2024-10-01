// preprocessor
#include <iostream>
#include <vector>
using namespace std;

void printArr(vector<int> arr)
{
  for (auto it = arr.begin(); it != arr.end(); it++)
  {
    cout << *it << " ";
  }
}

vector<int> leftRotation(vector<int> arr)
{
  int firstElement = arr[0];
  vector<int> leftRotateElement(arr.begin() + 1, arr.end());
  leftRotateElement.push_back(firstElement);
  return leftRotateElement;
}
// main start here ...
int main()
{
  int size = 0;
  cout << "Enter the size of the vector" << endl;
  cin >> size;
  vector<int> vec;
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter your element " << endl;
    cin >> n;
    vec.push_back(n);
  }
  cout << "before 1 left rotation " << endl;
  printArr(vec);
  vector<int> result = leftRotation(vec);
  cout << "After left rotate by 1 " << endl;
  printArr(result);
  return 0;
}