// preprocessor
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

bool isSubset(vector<int> arr1, vector<int> arr2)
{
  // create the frequency array
  unordered_map<int, int> frequencyArr;
  for (int elem : arr1)
  {
    frequencyArr[arr1[elem]]++;
  }
  for (int elem : arr2)
  {
    if (frequencyArr[arr2[elem]] > 0)
    {
      frequencyArr[elem]--;
    }
    else
    {
      return false;
    }
  }
  return true;
}

// main start here ...
int main()
{
  vector<int> arr1 = {1, 2, 3, 4, 5, 6, 7};
  vector<int> arr2 = {1, 2, 3,9};

  if (isSubset(arr1, arr2))
  {
    cout << "arr2 is a subset of arr1" << endl;
  }
  else
  {
    cout << "arr2 is not a subset of arr1" << endl;
  }
  return 0;
}