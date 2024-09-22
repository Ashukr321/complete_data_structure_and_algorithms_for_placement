// preprocessor
#include <iostream>
using namespace std;

string revStr(string str)
{
  string result;
  for (int i = str.length() - 1; i >= 0; i--)
  {
    result += str[i];
  }
  return result;
}

// main start here ...
int main()
{
  string str;
  cout << "Enter your string :" << endl;
  cin >> str;
  cout << "before reverse the sting :" << endl;
  cout << str << endl;
  cout << "After revers the string :" << endl;
  cout << revStr(str) << endl;

  return 0;
}