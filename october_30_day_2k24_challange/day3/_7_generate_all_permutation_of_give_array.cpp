// preprocessor
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> generateAllPermutationOfArr(int arr[], int size)
{
  vector<vector<int>> arrayPermutation;
  vector<int> currentPerm(arr, arr + size);
  arrayPermutation.push_back(currentPerm);
  while (next_permutation(currentPerm.begin(), currentPerm.end()))
  {
    arrayPermutation.push_back(currentPerm);
  }
  return arrayPermutation;
}
// main start here ...
int main()
{
  int size;
  cout << "Enter the size of the array " << endl;
  cin >> size;
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the element at index:" << i << endl;
    cin >> n;
    arr[i] = n;
  }

  vector<vector<int>> permutationArr = generateAllPermutationOfArr(arr, size);
  cout << "All permutation of the array are: " << endl;
  for (auto element : permutationArr)
  {
    cout << "[" << " ";
    for (auto element2 : element)
    {
      cout << element2 << " ";
    }
    cout << "]" << " ";
  }
  return 0;
}
