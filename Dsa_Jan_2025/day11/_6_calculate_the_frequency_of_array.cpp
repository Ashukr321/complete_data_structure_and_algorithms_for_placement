// preprocessor
#include<bits/stdc++.h>
#include <map>
using namespace std;


int main()
{
  int size;
  cout << "Enter the size of array : ";
  cin >> size;
  // create the array
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the element of array : ";
    cin >> n;
    arr[i] = n;
  }
  map<int,string>m;
  m[1]="apple";
  m[2]="orange";
  cout<<m[1]<<endl;
  for(auto it=m.begin();it!=m.end();it++){
    cout<<it.first<<" "<<it.second<<endl;
  }

}

// internal implementation of the map is done by the red black tree 
// by default store int he sorted order 
