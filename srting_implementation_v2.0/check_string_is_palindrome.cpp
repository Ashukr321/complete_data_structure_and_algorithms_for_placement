// preprocessor
#include <iostream>
using namespace std;

bool checkPalindrome(string str)
{
  for (int i = 0; i < str.length() / 2; i++)
  {
    if (str[i] != str[str.length() - 1 - i])
    {
      return false;
    }
  }

  return true;
}
// main start here ...
int main()
{
  string str;
  cout << "Enter the stirng : " << endl;
  cin >> str;

  if (checkPalindrome(str))
  {
    cout << "enter  your sting is the plindrome" << endl;
  }
  else
  {
    cout << "Enter your string is not plindrome" << endl;
  }

  return 0;
}