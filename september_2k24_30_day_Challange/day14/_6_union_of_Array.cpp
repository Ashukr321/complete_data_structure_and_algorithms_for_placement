// preprocessor
#include <iostream>
#include <set>
#include <vector>
using namespace std;
vector<int> getUnionOfArray(int arr1[], int size1, int arr2[], int size2)
{
  set<int> unionArray;
  for (int i = 0; i < size1; i++)
  {
    unionArray.insert(arr1[i]);
  }
  for (int i = 0; i < size2; i++)
  {
    unionArray.insert(arr2[i]);
  }
  vector<int> result(unionArray.begin(), unionArray.end());
  return result;
}
// main start here ...
int main()
{
  int size1, size2;
  cout << "Enter the size of the array 1 " << endl;
  cin >> size1;
  cout << "Enter the size of the array 2 " << endl;
  cin >> size2;
  int arr1[size1];
  int arr2[size2];

  cout << "Enter element of array 1 " << endl;
  for (int i = 0; i < size1; i++)
  {
    int n;
    cout << "Enter the element at index:" << i << endl;
    cin >> n;
    arr1[i] = n;
  }

  cout << "Enter element of array 2 " << endl;
  for (int i = 0; i < size2; i++)
  {
    int n;
    cout << "Enter the element at index:" << i << endl;
    cin >> n;
    arr2[i] = n;
  }

  vector<int> unionArr = getUnionOfArray(arr1, size1, arr2, size2);

  for (auto it = unionArr.begin(); it != unionArr.end(); it++)
  {
    cout << *it << " ";
  }
  return 0;
}