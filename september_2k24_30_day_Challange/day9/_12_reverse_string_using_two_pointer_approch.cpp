// preprocessor
#include <iostream>
using namespace std;

string reverseStr(string str)
{
  int l = 0;
  int r = str.length() - 1;
  while (l < r)
  {
    int temp = str[l];
    str[l] = str[r];
    str[r] = temp;
    l++;
    r--;
  }
  return str;
}

// main start here ...
int main()
{
  string str;
  cout << "Enter your string :" << endl;
  cin >> str;
  cout << "Before reversing the string :" << endl;
  cout << str << endl;
  cout << "After reversing the str:" << endl;
  cout << reverseStr(str) << endl;
  return 0;
}