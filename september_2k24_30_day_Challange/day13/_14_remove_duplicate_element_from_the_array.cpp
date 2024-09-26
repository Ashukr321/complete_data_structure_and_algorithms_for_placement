// preprocessor
#include <iostream>
#include <vector>
#include <set>
using namespace std;

// main start here ...
int main()
{
  vector<int> v;
  int size;
  cout << "Enter the size of the vector :" << endl;
  cin >> size;
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter element at index " << i << endl;
    cin >> n;
    v.push_back(n);
  }

  // set store the unique element init so that we use the set
  set<int> uniqueElement(v.begin(), v.end());
  for (auto it = uniqueElement.begin(); it != uniqueElement.end(); it++)
  {
    cout << *it << " ";
  }

  return 0;
}