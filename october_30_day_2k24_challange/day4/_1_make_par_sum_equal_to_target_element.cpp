// preprocessor
#include <iostream>

#include <vector>
#include <algorithm>
using namespace std;
vector<pair<int, int>> makePairSum(vector<int> arr, int targetSum)
{
  vector<pair<int, int>> pairSum;
  sort(arr.begin(), arr.end());
  int l = 0;
  int r = arr.size() - 1;
  while (l < r)
  {
    int currentSum = arr[l] + arr[r];
    if (currentSum == targetSum)
    {
      pairSum.push_back(make_pair(arr[l], arr[r]));
      l++;
      r--;
    }
    else if (currentSum < targetSum)
    {
      l++;
    }
    else
    {
      r--;
    }
  }
  return pairSum;
}

// main start here ...
int main()
{
  int size;
  cout << "Enter the size of the array :" << endl;
  cin >> size;
  vector<int> arr;
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the element at index:" << i << endl;
    cin >> n;
    arr.push_back(n);
  }
  int targetSum;
  cout << "Enter the target sum" << endl;
  cin >> targetSum;
  vector<pair<int, int>> result = makePairSum(arr, targetSum);

  for (auto pair : result)
  {
    cout << "{";
    cout << pair.first << " ," << pair.second;
    cout << "}" << endl;
  }
  return 0;
}