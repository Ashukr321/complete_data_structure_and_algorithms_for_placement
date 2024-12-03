// preprocessor
#include <iostream>
using namespace std;

bool isPalindrome(int x)
{
  int rev = 0;
  int num = x;
  while (x != 0)
  {
    int digit  = x % 10;
    rev = rev * 10 + digit;
    x = x / 10;
  }
  return rev == num;
}

// main start here ...
int main()
{
  int num;
  cout << "Enter your number " << endl;
  cin >> num;
  if (isPalindrome(num))
  {
    cout << "Number is palindrome" << endl;
  }
  else
  {
    cout << "Number is not palindrome" << endl;
  }

  return 0;
}