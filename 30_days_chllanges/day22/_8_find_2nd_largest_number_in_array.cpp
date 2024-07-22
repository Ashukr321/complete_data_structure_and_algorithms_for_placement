// preprocessor
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int secondLargestNumber(vector<int> v)
{
  sort(v.begin(), v.end());
  return v[v.size() - 2];
}

// main start here ...
int main()
{
  vector<int> v;
  v.push_back(2);
  v.push_back(5);
  v.push_back(5);
  v.push_back(230);
  v.push_back(4);
  cout << "the second largest element " << secondLargestNumber(v) << endl;
  return 0;
}