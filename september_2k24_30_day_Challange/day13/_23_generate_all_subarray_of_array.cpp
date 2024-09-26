// preprocessor
#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> generateAllSubArray(vector<int> arr, int size)
{
  vector<vector<int>> subArrays;
  for (int i = 0; i < size; i++)
  {
    for (int j = i; j < size; j++)
    {
      vector<int> subArray(arr.begin() + i, arr.begin() + j + 1);
      subArrays.push_back(subArray);
    }
  }
  return subArrays;
}
// main start here ...
int main()
{
  vector<int> arr;
  int size;
  cout << "Enter the size of the array: " << endl;
  cin >> size;
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the element at index:" << i << endl;
    cin >> n;
    arr.push_back(n);
  }

  vector<vector<int>> subArrays = generateAllSubArray(arr, size);
  int maxSum = 0;

  for (auto subArray : subArrays)
  {
    int sum = 0;
    cout << "[";
    for (auto ele : subArray)
    {
      sum += ele;
      cout << ele << " ";
    }
    cout << "]";

    if (sum > maxSum)
    {
      maxSum = sum;
    }
    cout << endl;
  }
  cout << "Max sum Sub array " << maxSum << endl;

  return 0;
}