// preprocessor
#include <iostream>
using namespace std;

int revNum(int num, int rev = 0)
{
  if (num == 0)
  {
    return rev;
  }
  int digit = num % 10;
  rev = rev * 10 + digit;
  revNum(num / 10, rev);
}

// main start here ...
int main()
{
  int num;
  cout << "Enter your number :" << endl;
  cin >> num;
  cout << "Before reverse the number  :" << num << endl;
  cout << "After reverse the number :" << revNum(num) << endl;
  return 0;
}