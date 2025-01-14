// preprocessor
#include <iostream>
using namespace std;

bool isPalindrome(string str)
{
  // create two pointers
  int end = str.length() - 1;
  for (int i = 0; i < str.length(); i++)
  {
    if (str[i] != str[end])
    {
      return false;
    }
    end--;
  }
  return true;
}

// main start here ...
int main()
{
  string str;
  cout << "Enter your string " << endl;
  cin >> str;
  if (isPalindrome(str))
  {
    cout << "String is palindrome " << endl;
  }
  else
  {
    cout << "String is not palindrome " << endl;
  }

  return 0;
}