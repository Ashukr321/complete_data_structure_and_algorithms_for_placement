// preprocessor
#include <iostream>
using namespace std;
string reversString(string str, int size)
{
  if (size <= 0)
  {
    return "";
  }
  return str[size - 1] + reversString(str, size - 1);
}

// main start here ...
int main()
{
  string str;
  cout << "Enter your string :" << endl;
  getline(cin, str);
  cout << "before reverse string:" << str << endl;
  cout << "After reverse the string:" << endl;
  cout << reversString(str, str.length()) << endl;
  return 0;
}