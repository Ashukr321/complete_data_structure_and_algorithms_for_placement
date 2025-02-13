// preprocessor
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

void printVec(vector<int> v)
{
  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i]<<" ";
  }
  cout << endl;
}
// main start here ...
int main()
{
  vector<int> v;
  int n;
  cout << "Enter the size of the vector " << endl;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int n;
    cin >> n;
    v.push_back(n);
  }

  cout << " print the vector " << endl;
  printVec(v);
  return 0;
}