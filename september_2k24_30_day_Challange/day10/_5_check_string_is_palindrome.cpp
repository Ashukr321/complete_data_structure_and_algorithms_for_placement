// preprocessor
#include <iostream>
using namespace std;

bool isPalindrome(string str)
{
  for (int i = 0; i < str.length() - 1; i++)
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
  cout << "Enter your string :" << endl;
  cin >> str;
  if (isPalindrome(str))
  {
    cout << "String is palindrome" << endl;
  }
  else
  {
    cout << "String is not palindrome" << endl;
  }
  return 0;
}