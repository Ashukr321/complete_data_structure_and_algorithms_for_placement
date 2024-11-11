// preprocessor
#include <iostream>
using namespace std;

bool isPalindrome(int num)
{
  int temp = num;
  int rev = 0;
  while (num > 0)
  {
    int digit = num % 10;
    rev = rev * 10 + digit;
    num = num / 10;
  }
  return temp == rev;
}

// main start here ...
int main()
{
  int num;
  cout << "Enter the number : ";
  cin >> num;
  if (isPalindrome(num))
  {
    cout << "The number is palindrome";
  }
  else
  {
    cout << "The number is not palindrome";
  }
  return 0;
}

/*
algo
1. take the number
2. check the number is palindrome or not return bool
3. print the result
*/