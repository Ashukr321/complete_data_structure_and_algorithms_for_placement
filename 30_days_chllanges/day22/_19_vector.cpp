// preprocessor
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// main starts here
int main(){
  
  // create the vector
  vector<int> v;
  int size;
  cout << "Enter the size of the vector you want to insert into vector v: " << endl;
  cin >> size;
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the element at index " << i << endl;
    cin >> n;
    v.push_back(n);
  }

  cout << "Display all the vector data using iterator:" << endl;
  cout << endl;

  for (auto it = v.begin(); it != v.end(); it++){
    cout << *it << " ";
  }
  cout << endl; // add a newline at the end
  
  return 0;
}