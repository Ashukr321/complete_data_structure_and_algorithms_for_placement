// preprocessor
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> mergeSort(vector<int> v1, vector<int> v2)
{
  vector<int> merged;
  int i = 0;
  int j = 0;
  while (i < v1.size() && j < v2.size())
  {
    if (v1[i] < v2[j])
    {
      merged.push_back(v1[i]);
      i++;
    }
    else
    {
      merged.push_back(v2[j]);
      j++;
    }
  }

  // append the remaining elements of v1 and v2
  while (i < v1.size())
  {
    merged.push_back(v1[i]);
    i++;
  }
  while (j < v2.size())
  {
    merged.push_back(v2[j]);
    j++;
  }
  return merged;
}

int main()
{
  vector<int> v1 = {12,2,3,2,23,24,23};
  vector<int> v2 = {11,23,4,3,41,324,4,32,423};

  // Sort the input vectors
  sort(v1.begin(), v1.end());
  sort(v2.begin(), v2.end());

  vector<int> merged = mergeSort(v1, v2);
  cout<<"after merging the vector in sorted order : "<<endl;
  for (int i = 0; i < merged.size(); i++){
    cout << merged[i] << " ";
  }
  return 0;
}