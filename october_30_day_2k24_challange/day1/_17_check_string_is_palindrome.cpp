// preprocessor
#include <iostream>
using namespace std;

bool isPalindrome(string str)
{
  int i = 0;
  int j = str.size() - 1;
  while (i < j)
  {
    if (str[i] != str[j])
    {
      return false;
      break;
    }
    i++;
    j--;
  }
  return true;
}
// main start here ...
int main()
{
  string str;
  cout << "Enter your string" << endl;
  cin >> str;
  if (isPalindrome(str))
  {
    cout << "yes string is a palindrome" << endl;
  }
  else
  {
    cout << "no string is not a palindrome" << endl;
  }
  return 0;
}