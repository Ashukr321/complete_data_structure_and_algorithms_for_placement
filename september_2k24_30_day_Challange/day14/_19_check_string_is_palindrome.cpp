// preprocessor
#include <iostream>
using namespace std;

bool isPalindrome(string str)
{
  int i = 0;
  int j = str.length() - 1;
  while (i < j)
  {
    if (str[i] != str[j])
    {
      return false;
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
  cout << "Enter your string :" << endl;
  cin >> str;
  if (isPalindrome(str))
  {
    cout << "The string is a palindrome." << endl;
  }
  else
  {
    cout << "The string is not a palindrome." << endl;
  }

  return 0;
}