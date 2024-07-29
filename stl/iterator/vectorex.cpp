// preprocessor
#include <iostream>
#include <vector>
using namespace std;

// main start here ...
int main()
{
  vector<int> v1 = {12, 23, 432, 4, 32432};

  //  create the iterator
  vector<int>::iterator it;
  for (it = v1.begin(); it != v1.end(); it++)
  {
    cout << *it << endl;
  }

  return 0;
}