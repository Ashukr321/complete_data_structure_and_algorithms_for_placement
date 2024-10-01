// preprocessor
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void rotateByKthPos(vector<int> &arr, int k)
{
  k = k % arr.size();
  rotate(arr.begin(), arr.begin() + k, arr.end());
}
// main start here ...
int main()
{
  int size;
  cout << "Enter size of the array :" << endl;
  cin >> size;
  vector<int> v1;
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter element at index:" << i << endl;
    cin >> n;
    v1.push_back(n);
  }
  int pos;
  cout << "Enter position at which you want to shift by left " << endl;
  cin >> pos;
  cout<<"Before rotating :"<<endl;
  for (auto it = v1.begin(); it != v1.end(); it++)
  {
    cout << *it << " ";
  }
  cout<<endl;
  rotateByKthPos(v1, pos);
  for (auto it = v1.begin(); it != v1.end(); it++)
  {
    cout << *it << " ";
  }

  return 0;
}