// preprocessor
#include <iostream>
using namespace std;

bool isPalindrome(int num)
{
  int reversNum = 0;
  int originalNum = num;
  while (num != 0)
  {
    int digit = num % 10;
    reversNum = reversNum * 10 + digit;
    num = num / 10;
  }
  return reversNum == originalNum;
}
// main start here ...
int main()
{
  int n;
  cout << "Enter you number :" << endl;
  cin >> n;
  if (isPalindrome(n))
  {
    cout << "Number is palindrome" << endl;
  }
  else
  {
    cout << "Number is not palindrome" << endl;
  }
  return 0;
}