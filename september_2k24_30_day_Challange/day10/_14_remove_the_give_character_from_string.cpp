// preprocessor
#include <iostream>
using namespace std;

string removeChar(string str, char c)
{
  string newStr = "";
  for (int i = 0; i < str.length(); i++)
  {
    if (str[i] == c)
    {
      continue;
    }
    else
    {
      newStr += str[i];
    }
  }
  return newStr;
}
// main start here ...
int main()
{
  string str;
  cout << "Enter your string :" << endl;
  getline(cin, str);
  char ch;
  cout << "Enter your character that you want to remove from string" << endl;
  cin >> ch;

  cout << endl;
  cout << removeChar(str, ch) << endl;
  return 0;
}