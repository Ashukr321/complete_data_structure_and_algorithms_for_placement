// preprocessor
#include <iostream>
using namespace std;

string capitalized(string str)
{
  string result = "";
  for (int i = 0; i < str.length(); i++)
  {
    if (i == 0 || i == str.length() - 1)
    {
      result += toupper(str[i]);
    }
    else
    {
      result += str[i];
    }
  }
  return result;
}
// main start here ...
int main()
{
  string str;
  cout << "Enter the string : ";
  cin >> str;
  cout << "The string is : " << str << endl;
  cout << "After capialized " << capitalized(str) << endl;
  return 0;
}