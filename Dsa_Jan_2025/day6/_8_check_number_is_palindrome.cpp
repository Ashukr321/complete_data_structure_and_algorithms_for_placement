// preprocessor
#include <iostream>
using namespace std;

bool isPalindrome(int num)
{
  int rev = 0;
  int temp = num;
  while (num != 0)
  {
    int digit = num % 10;
    rev = rev * 10 + digit;
    num = num / 10;
  }
  return rev == temp;
}
// main start here ...
int main()
{
  int num;
  cout << "Enter your number " << endl;
  cin >> num;
  if (isPalindrome(num))
  {
    cout << "Number is palindrome " << endl;
  }
  else
  {
    cout << "Number is not palindrome " << endl;
  }

  return 0;
}