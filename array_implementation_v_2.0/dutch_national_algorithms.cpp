// preprocessor
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void applyDutchNationalAlgorithms(vector<int> &v)
{
  int low = 0;
  int mid = 0;
  int high = v.size() - 1;
  while (low <= high)
  {
    if (v[mid] == 0)
    {
      swap(v[low], v[mid]);
      low++;
      mid++;
    }
    else if (v[mid] == 1)
    {
      mid++;
    }
    else
    {
      swap(v[mid], v[high]);
      high--;
    }
  }
}
void printArray(vector<int> v)
{
  for (auto it : v)
  {
    cout << it << " ";
  }
}

// main start here ...
int main()
{
  int size;
  cout << "Enter the size  of the vector that you want  to insert the elements in  the  vector " << endl;
  cin >> size;
  vector<int> v;
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the element at index: " << i << endl;
    cin >> n;
    v.push_back(n);
  }
  cout << "before apply the national dutch  algorithms " << endl;
  printArray(v);
  applyDutchNationalAlgorithms(v);
  cout << "After applying the dutch national algorithms : " << endl;
  printArray(v);
  return 0;
}
