// preprocessor
#include <iostream>
using namespace std;

bool isPalindrome(int num)
{
  int temp = num;
  int rev = 0;
  while (num != 0)
  {
    int digit = num % 10;
    rev = rev * 10 + digit;
    num = num / 10;
  }
  return temp == rev;// this returns true or false
}
// main start here ...
int main()
{
  int num;
  cout << "Enter your number " << endl;
  cin>>num;
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