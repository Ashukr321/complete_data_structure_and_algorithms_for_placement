// preprocessor
#include <iostream>
#include <algorithm>
using namespace std;

string revStr(string str)
{
  string revs = str;
  reverse(revs.begin(), revs.end());
  return revs;
}

// main start here ...
int main()
{
  string str;
  cout << "Enter your string:" << endl;
  getline(cin, str);
  cout << "before reversing the string" << endl;
  cout << str << endl;
  cout << "After reversing the string" << endl;
  cout << revStr(str) << endl;
  return 0;
}