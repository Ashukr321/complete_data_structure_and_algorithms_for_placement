// preprocessor
#include <iostream>
#include <vector>
using namespace std;

// main start here ...
int main()
{
  vector<int> vec;
  // bydefualt size of the vec is  the  0 ;

  cout << vec.size() << endl;
  cout << endl;
  vector<int> vec2(5, 10);

  // print  the vector
  for (int it : vec2)
  {
    cout << it << endl;
  }

  cout << endl;
  vector<int> vec3 = {1, 2, 3, 4};
  for (int it : vec3)
  {
    cout << it << endl;
  }

  return 0;
}