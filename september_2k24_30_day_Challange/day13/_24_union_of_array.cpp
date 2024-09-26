// preprocessor
#include <iostream>
#include <vector>
#include <set>
using namespace std;

vector<int> getUnionOfArray(int arr1[], int size1, int arr2[], int size2)
{
  // create sets
  set<int> unionSet;
  for (int i = 0; i < size1; i++)
  {
    unionSet.insert(arr1[i]);
  }
  // insert 2nd array into the unionSet
  for (int i = 0; i < size2; i++)
  {
    unionSet.insert(arr2[i]);
  }
  vector<int> result(unionSet.begin(), unionSet.end());
  return result;
}

// main start here ...
int main()
{
  int size1, size2;
  cout << "Enter the size 1 of the arr1 " << endl;
  cin >> size1;
  cout << "Enter the size 2 of  the arr 2 " << endl;
  cin >> size2;
  int *arr1 = new int[size1];
  int *arr2 = new int[size2];
  cout << "Enter the element  of the array 1 " << endl;
  for (int i = 0; i < size1; i++)
  {
    cout << "Enter the element at index: " << i << endl;
    cin >> arr1[i];
  }
  cout << endl;
  cout << "Enter the element  of the array 2 " << endl;
  for (int i = 0; i < size2; i++)
  {
    cout << "Enter the element at index: " << i << endl;
    cin >> arr2[i];
  }
  cout << endl;
  vector<int> result = getUnionOfArray(arr1, size1, arr2, size2);
  // print all  union of the array
  for (auto it = result.begin(); it != result.end(); it++)
  {
    cout << *it << " ";
  }
  delete[] arr1;
  delete[] arr2;
  return 0;
}