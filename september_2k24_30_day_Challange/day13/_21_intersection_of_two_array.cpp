// preprocessor
#include <iostream>
#include <vector>
using namespace std;

vector<int> intersectionOfArr(int arr1[], int size1, int arr2[], int size2)
{
  vector<int> vec1(arr1, arr1 + size1);
  vector<int> vec2(arr2, arr2 + size2);
  vector<int> result;

  for (int i = 0; i < size1; i++)
  {
    for (int j = 0; j < size2; j++)
    {
      if (arr1[i] == arr2[j])
      {
        result.push_back(arr1[i]);
        break;
      }
    }
  }

  return result;
}

// main start here ...
int main()
{
  int size1, size2;
  cout << "Enter the size of array 1: " << endl;
  cin >> size1;
  cout << "Enter the size of array 2: " << endl;
  cin >> size2;
  int arr1[size1];
  int arr2[size2];

  // Enter elements of array 1
  cout << "Enter the elements of array 1: " << endl;
  for (int i = 0; i < size1; i++)
  {
    int n;
    cout << "Enter the element at index: " << i << endl;
    cin >> n;
    arr1[i] = n;
  }
  cout << endl;
  cout << "Enter the elements of array 2: " << endl;
  for (int i = 0; i < size2; i++)
  {
    int n;
    cout << "Enter the element at index: " << i << endl;
    cin >> n;
    arr2[i] = n;
  }

  vector<int> result = intersectionOfArr(arr1, size1, arr2, size2);

  cout << "Intersection of two arrays: ";
  for (int i = 0; i < result.size(); i++)
  {
    cout << result[i] << " ";
  }
  cout << endl;

  return 0;
}