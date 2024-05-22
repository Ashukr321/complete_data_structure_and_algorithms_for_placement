// preprocessor
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printData(vector<int> v1)
{
  for (int i = 0; i < v1.size(); i++)
  {
    cout << v1[i] << " ";
  }
}
// main start here ...
int main()
{
  // vector in the cpp
  // vector  is the dynamic  array
  // vector<int> v1;// this is the empty vector with data type int

  vector<int> v1(5, 10); // size is 5 and element is assign 10 ;
  vector<int> v2 = {
      1,
      2,
      3,
      4,
  }; // create and initialize the vector
  cout << v2[2] << endl;
  cout << v1[0] << endl;

  v2.push_back(12);
  printData(v2);

  v2.push_back(34);
  cout<<"\n After push back the elements"<<endl;
  printData(v2);

  v2.pop_back();
  cout<<endl;
  cout<<v2.size()<<endl;
  cout<<endl;
  cout<<v2.at(2)<<endl;
  cout<<v2.front()<<endl;
  cout<<v2.back()<<endl;
  v2.clear();
  cout<<v2.capacity()<<endl;
  cout<<v2.empty()<<endl;
  return 0;
}