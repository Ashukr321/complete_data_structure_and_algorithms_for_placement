// preprocessor
#include <iostream>
#include <vector>
using namespace std;

vector<int> mergeSort(vector<int> v1, vector<int> v2)
{
  vector<int> result;
  int i, j = 0;
  while (i < v1.size() && j <v2.size())
  {
    if (v1[i] < v2[j])
    {
      result.push_back(v1[i]);
      i++;
    }
    else
    {
      result.push_back(v2[j]);
      j++;
    }
  }

  while (i < v1.size())
  {
    result.push_back(v1[i]);
    i++;
  }
  while (j < v2.size())
  {
    result.push_back(v2[j]);
    j++;
  }

  return result;
}
// main start here ...
int main()
{
  vector<int> v1 = {2, 3, 4};
  vector<int> v2 = {4, 5, 6, 7};
  vector<int> result = mergeSort(v1, v2);
  for (auto it = result.begin(); it != result.end(); it++)
  {
    cout << *it << " ";
  }
  return 0;
}