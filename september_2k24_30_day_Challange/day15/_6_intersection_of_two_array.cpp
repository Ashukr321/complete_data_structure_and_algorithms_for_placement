// preprocessor
#include <iostream>
#include <vector>
using namespace std;

vector<int> insertionOfArray(int arr1[], int size1, int arr2[], int size2)
{
  vector<int> result;
  for (int i = 0; i < size1; i++)
  {
    for (int j = 0; j < size2; j++)
    {
      if (arr1[i] == arr2[j])
      {
        result.push_back(arr1[i]);
      }
    }
  }
  return result;
}

// main start here ...
int main()
{
  int size1, size2;
  cout << "Enter the size of the array 1 :" << endl;
  cin >> size1;
  cout << "Enter the size of the array 2 " << endl;
  cin >> size2;
  int arr1[size1];
  int arr2[size2];

  cout << "Enter the elements of array 1 " << endl;
  for (int i = 0; i < size1; i++)
  {
    int n;
    cout << "Enter the element at index : " << i << endl;
    cin >> n;
    arr1[i] = n;
  }
  cout << endl;

  cout << "Enter the elements of array 2 " << endl;
  for (int i = 0; i < size2; i++)
  {
    int n;
    cout << "Enter the element at index : " << i << endl;
    cin >> n;
    arr2[i] = n;
  }

  cout << "Intersection of the two array :" << endl;
  vector<int> result = insertionOfArray(arr1, size1, arr2, size2);
  for (auto it = result.begin(); it != result.end(); it++)
  {
    cout << *it << " ";
  }

  return 0;
}