// preprocessor
#include <iostream>
#include<algorithm>
#include <vector>
using namespace std;

vector<int> findUnionArray(int arr1[], int size1, int arr2[], int size2) {
  vector<int> result;
  int i = 0, j = 0;
  while (i < size1 && j < size2) {
    if (arr1[i] < arr2[j]) {
      result.push_back(arr1[i]);
      i++;
    } else if (arr1[i] > arr2[j]) {
      result.push_back(arr2[j]);
      j++;
    } else {
      result.push_back(arr1[i]);
      i++;
      j++;
    }
  }
  while (i < size1) {
    result.push_back(arr1[i]);
    i++;
  }
  while (j < size2) {
    result.push_back(arr2[j]);
    j++;
  }
  return result;
}



void displayArray(int arr[], int size)
{

  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
}
// main start here ...
int main()
{
  int size1;
  cout << "Enter the size of the array  arr1" << endl;
  cin >> size1;
  int arr1[size1];

  cout << "Enter the element of arr1 " << endl;
  for (int i = 0; i < size1; i++)
  {
    int n;
    cout << "Enter the element at index: " << i << endl;
    cin >> n;
    arr1[i] = n;
  }

  cout << endl;
  int size2;
  cout << "Enter the size of the array arr2 " << endl;
  cin >> size2;
  int arr2[size2];
  cout << "Enter the element of arr2 " << endl;
  for (int i = 0; i < size2; i++)
  {
    int n;
    cout << "Enter the element at index " << i << endl;
    cin >> n;
    arr2[i] = n;
  }

  cout << "Display the array 1" << endl;
  displayArray(arr1, size1);

  cout << endl;
  cout << "Display the arr 2 " << endl;
  displayArray(arr2, size2);

  vector<int> unionArr = findUnionArray(arr1, size1, arr2, size2);
  sort(unionArr.begin(),unionArr.end());

  cout<<endl;
  cout << "Union of the two array : " << endl;
  for (auto it : unionArr)
  {
    cout << it << " ";
  }

  return 0;
}