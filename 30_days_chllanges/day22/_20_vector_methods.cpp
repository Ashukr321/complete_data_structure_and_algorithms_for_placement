// preprocessor
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printVec(vector<int> vec)
{
  for (auto it = vec.begin(); it != vec.end(); ++it) // fix: use ++it instead of,it++
  {
    cout << *it << endl; // this will print the array element
  }
}

// main start here...
int main()
{
  // all the methods of the vector
  vector<int> vec;
  cout << "PUSH the data into the vector using push_back methods" << endl;
  vec.push_back(2);
  vec.push_back(4);
  vec.push_back(6);
// print the  dat
  printVec(vec);

  cout << "get the  front element of the array :" << endl;
  cout << vec.front() << endl;
  cout << "get the  back element of the array :" << endl;
  cout << vec.back() << endl;

  cout << "delete the element from the end of the array :" << endl;
  vec.pop_back();
  cout << "after removing the element from the vector " << endl;
  printVec(vec);
  return 0;
}