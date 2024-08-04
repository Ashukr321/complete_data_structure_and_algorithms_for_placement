// preprocessor
#include <iostream>
#include <algorithm>
using namespace std;

bool isPalindrome(string str)
{

  string revStr = str;
  reverse(revStr.begin(), revStr.end());
  return revStr == str;
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