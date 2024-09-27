#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> getAllSubArray(vector<int> arr, int size) {
  vector<vector<int>> subArrays;
  for (int i = 0; i < size; i++) {
    for (int j = i; j <size ; j++) {
      vector<int> subArray(arr.begin() + i, arr.begin() + j + 1);
     
        subArrays.push_back(subArray);
    }
  }
  return subArrays;
}

int main() {
  int size;
  cout << "Enter the size of the array :" << endl;
  cin >> size;
  vector<int> arr;
  for (int i = 0; i < size; i++) {
    int n;
    cout << "Enter the element at index:" << i << endl;
    cin >> n;
    arr.push_back(n);
  }
  vector<vector<int>> result = getAllSubArray(arr, size);

  for (auto subArray : result) {
    for (auto ele : subArray) {
      cout << ele << " ";
    }
    cout << endl; 
  }
  return 0;
}