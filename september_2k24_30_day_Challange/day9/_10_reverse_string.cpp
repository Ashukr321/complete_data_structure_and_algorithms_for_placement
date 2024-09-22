// preprocessor
#include <iostream>
#include <algorithm>
using namespace std;

// main start here ...
int main()
{
  string str;
  cout << "Enter your string :" << endl;
  cin >> str;
  cout << "Before revers the string :" << endl;
  cout << str << endl;
  cout << endl;
  cout << "After reverse the string :" << endl;
  reverse(str.begin(), str.end());
  cout << str << endl;
  return 0;
}