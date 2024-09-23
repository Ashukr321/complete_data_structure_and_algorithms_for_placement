// preprocessor
#include <iostream>
using namespace std;

string capitalizedStr(string str)
{
  string newString;
  for (int i = 0; i < str.length(); i++)
  {
    if (i == 0 || i == str.length() - 1)
    {
      newString += toupper(str[i]);
    }
    else
    {
      newString += tolower(str[i]);
    }
  }
  return newString;
}

// main start here ...
int main()
{
  string str;
  cout << "Enter your string :" << endl;
  cin >> str;
  cout << "Before capitalized :" << endl;
  cout << str << endl;
  cout << "After capitalized :" << endl;
  cout << capitalizedStr(str) << endl;

  return 0;
}