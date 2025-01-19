// preprocessor
#include <iostream>
using namespace std;

string toUppercase(string str)
{
  string result;
  for (int i = 0; i < str.length(); i++)
  {
    result += toupper(str[i]);
  }
  return result;
}
// main start here ...
int main()
{
  string str;
  cout << "Enter your string " << endl;
  cin >> str;
  cout << "Uppercase" << toUppercase(str) << endl;
  return 0;
}